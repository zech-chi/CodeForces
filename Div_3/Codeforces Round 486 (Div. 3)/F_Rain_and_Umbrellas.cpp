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
        ll a, n, m; cin >> a >> n >> m;
        vector<bool> rain(a + 1, false);
        vector<ll> umbrella(a + 1, 0);
        vector<ll> dp(a + 1, 1e18);
        ll l, r;
        ll x, p;
        for (ll i = 0; i < n; i++) {
            cin >> l >> r;
            for (ll x = l; x < r; x++) {
                rain[x] = true;
            }
        }

        for (ll i = 0; i < m; i++) {
            cin >> x >> p;
            if (umbrella[x] == 0) umbrella[x] = p;
            umbrella[x] = min(umbrella[x], p);
        }

        dp[0] = 0;
        bool flag;
        for (ll x = 1; x <= a; x++) {
            if (!rain[x - 1]) {
                dp[x] = dp[x - 1];
                continue;
            }
            flag = false;
            for (ll y = x - 1; y >= 0; y--) {
                if (umbrella[y] > 0) {
                    dp[x] = min(dp[x], (x - y) * umbrella[y] + dp[y]);
                    flag = true;
                }
            }

            if (!flag) {
                cout << "-1\n";
                return;
            }
        }

        // for (int x = 0; x <= a; x++) {
        //     cout << "dp[" << x << "] = " << dp[x] << "\n"; 
        // }

        cout << dp[a] << "\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
