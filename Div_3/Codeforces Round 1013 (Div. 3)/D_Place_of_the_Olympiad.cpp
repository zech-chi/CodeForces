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
#include <queue>
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


class Solution {
private:

public:
    void solve() {
        int t; cin >> t;
        while (t--) {
            ll n, m, k; cin >> n >> m >> k;
            ll res = -1;
            ll l, r, mid;
            l = 1;
            r = m;

            while (l <= r) {
                mid = (r + l) / 2;
                ll div = m / (mid + 1);
                ll mod = m % (mid + 1);
                ll check = n * (mid * div + mod);
                // cout << mid << " " << check << "\n";
                if (check >= k) {
                    if (res == -1) res = mid;
                    res = min(res, mid);
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }

            cout << res << "\n";
        }
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
