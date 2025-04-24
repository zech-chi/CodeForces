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
        ll t; cin >> t;
        while (t--) {
            ll n; cin >> n;
            vector<ll> vv(n); for (auto &a: vv) cin >> a;
            ll max_cnt = 0;
            ll move_l = -1;

            for (ll l = 0; l < n; l++) {
                ll cnt = 0;
                for (ll r = l + 1; r < n; r++) {
                    if (vv[r] < vv[l]) {
                        cnt++;
                    }
                }

                if (cnt > 0 && cnt > max_cnt) {
                    max_cnt = cnt;
                    move_l = l;
                }
            }

            if (move_l == -1) {
                cout << "1 1\n";
            } else {
                cout << move_l + 1 << " " << n << "\n";
            }
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
