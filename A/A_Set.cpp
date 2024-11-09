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
#include <map>
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
    int t; cin >> t;
    ll mini, maxi, k, l, r, m, res;

    while (t--) {
        cin >> mini >> maxi >> k;
        l = mini;
        r = maxi;
        res = -1;

        while (l <= r) {
            m = l + (r - l) / 2;
            if ((m * k) <= maxi) {
                res = m;
                l = m + 1;
            } else {
                r = m - 1;
            }
        }

        if (res == -1)
            res = 0;
        else
            res = (res - mini) + 1;

        cout << res << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

