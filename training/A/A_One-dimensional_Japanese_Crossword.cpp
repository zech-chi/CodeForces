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

int min(int x, int y) { return (x > y ? y : x); }
int max(int x, int y) { return (x < y ? y : x); }
int abs(int x) { return (x > 0 ? x : -x); }


void print(char c, int n_time) {
    for (int i = 0; i < n_time; i++)
        cout << c;
}

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    vector<int> v;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'B')
            count++;
        else {
            if (count > 0) 
                v.push_back(count);
            count = 0;
        }
    }
    if (count > 0)
        v.push_back(count);

    cout << v.size() << "\n";
    if (v.size() > 0) {
        for (int i = 0; i < v.size(); i++) 
            cout << v[i] << " ";
        cout << "\n";
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}
