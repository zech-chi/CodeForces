/*
* ███████╗███████╗ ██████╗██╗  ██╗       ██████╗██╗  ██╗██╗
* ╚══███╔╝██╔════╝██╔════╝██║  ██║      ██╔════╝██║  ██║██║
*   ███╔╝ █████╗  ██║     ███████║█████╗██║     ███████║██║
*  ███╔╝  ██╔══╝  ██║     ██╔══██║╚════╝██║     ██╔══██║██║
* ███████╗███████╗╚██████╗██║  ██║      ╚██████╗██║  ██║██║
* ╚══════╝╚══════╝ ╚═════╝╚═╝  ╚═╝       ╚═════╝╚═╝  ╚═╝╚═╝
*/
#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <iterator>
#include <set>
#include <vector>
#include <numeric>
#include <cmath>
#include <stack>
#include <iomanip>
typedef long long ll;
using namespace std;

ll min(ll x, ll y) { return (x > y ? y : x); }
ll max(ll x, ll y) { return (x < y ? y : x); }

void solve()
{
    string s1, s2; cin >> s1 >> s2;
    int correct_value = 0;
    for (char &c: s1) {
        if (c == '+')
            correct_value++;
        else
            correct_value--;
    }
    vector<int> possible_values;
    possible_values.push_back(0);
    for (char &c: s2) {
        if (c == '+') {
            for (int &x: possible_values)
                x++;
        } else if (c == '-') {
            for (int &x: possible_values)
                x--;
        } else {
            if (possible_values.empty()) {
                possible_values.push_back(-1);
                possible_values.push_back(+1);
                continue;
            }
            vector<int> new_possible_values;
            for (int x: possible_values) {
                new_possible_values.push_back(x + 1);
                new_possible_values.push_back(x - 1);
            }
            possible_values = new_possible_values;
        }
    }
    int count = 0;
    for (int &i: possible_values) {
        if (i == correct_value)
            count++;
    }
    cout << fixed << setprecision(12) << ((1.0 * count) / (1.0 * possible_values.size())) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

