/*
*   zech-chi
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

void solve()
{
    string n; cin >> n;
    if (n[0] != '-') {
        cout << n << "\n";
    } else if (n[2] == '0' && n.size() == 3) {
        cout << "0\n";
    } else if (n[2] == '0') {
        for (int i = 0; i < n.size() - 1; i++)
            cout << n[i];
        cout << "\n";
    } else {
        cout << "-";
        for (int i = 1; i < n.size() - 1; i++)
            cout << n[i];
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

