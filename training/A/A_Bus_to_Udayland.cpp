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
    int n; cin >> n;
    string s;
    vector<pair<string, string> > bus(n);
    for (int i = 0; i < n; i++) {
        cin >> s;
        int pos = s.find('|');
        bus[i] = make_pair(s.substr(0, pos), s.substr(pos + 1));
    }

    int i = 0;
    while (i < n) {
        if (bus[i].first == "OO") {
            bus[i].first = "++";
            break;
        }
        if (bus[i].second == "OO") {
            bus[i].second = "++";
            break;
        }
        i++;
    }
    if (i == n) {
        cout << "NO\n";
        return ;
    }
    cout << "YES\n";
    for (int i = 0; i < n; i++) {
        cout << bus[i].first << "|" << bus[i].second << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}
