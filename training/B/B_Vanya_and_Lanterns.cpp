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

double max(double x, double y) { return (x > y ? x : y); }


void solve()
{
    ll n, l; cin >> n >> l;
    vector<ll> lanterns(n);
    for (ll i = 0; i < n; i++)
        cin >> lanterns[i];

    sort(lanterns.begin(), lanterns.end());
    double mn = lanterns[0];
    for (ll i = 1; i < n; i++) {
        mn = max(mn, ((lanterns[i] - lanterns[i - 1]) * 1.0) / 2.0);
    }
    mn = max(mn, 1.0 * (l - lanterns[n - 1]));
    cout << fixed << setprecision(10) << mn << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

