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
#define abs(a) (((a) > 0) ? (a) : (-(a)))
#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) > (b)) ? (b) : (a))


void solve()
{
    ll n, m; cin >> n >> m;
    ll x, y; cin >> x >> y;
    ll k; cin >> k;
    ll dx, dy;
    ll moves = 0;
    ll a1, a2, a;


    while (k--) {
        cin >> dx >> dy;
        if (dx > 0) a1 = (n - x) / dx;
        else if (dx < 0) a1 = (1 - x) / dx;
        else a1 = max(n, m);

        if (dy > 0) a2 = (m - y) / dy;
        else if (dy < 0) a2 = (1 - y) / dy;
        else a2 = max(n, m);

        a = min(a1, a2);
        moves += a;
        x += a * dx;
        y += a * dy;
    }

    cout << moves << "\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

