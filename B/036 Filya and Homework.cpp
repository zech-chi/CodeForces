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
    ll n; cin >> n;
    ll a;
    vector<ll> three(3, 0);
    ll j = 0;
    bool flag = true;
    for (ll i = 0; i < n; i++) {
        cin >> a;
        if (j == 0)
            three[j++] = a;
        else if (j == 1) {
            if (three[0] != a)
                three[j++] = a;
        } else if (j == 2) {
            if (three[0] != a && three[1] != a)
                three[j++] = a;
        } else if (j == 3) {
            if (three[0] != a && three[1] != a && three[2] != a)
                flag = false;
        }
    }
    if (!flag) {
        cout << "NO\n";
        return;
    }
    if (j == 1 || j == 2) {
        cout << "YES\n";
        return ;
    }
    sort(three.begin(), three.end());
    if (three[1] - three[0] != three[2] - three[1]) cout << "NO\n";
    else cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

