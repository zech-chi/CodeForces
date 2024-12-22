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
			ll n, x, y; cin >> n >> x >> y;
			vector<ll> a(n);
			for (ll i = 0; i < n; i++) cin >> a[i];
			ll sum = 0;
			for (ll i = 0; i < n; i++) sum += a[i];
			
			sort(a.begin(), a.end());
			ll res = 0;
			for (ll i = 0; i < n; i++) {
				ll sm = sum - a[i];
				if (sm < x)
					continue;
				if (sm - a[n - 1] > y)
					continue;
				ll l, r, m, lbest = -1, rbest = -1;
				l = i + 1;
				r = n - 1;
				while (l <= r) {
					m = l + (r - l) / 2;
					if (x <= sm - a[m]  && sm - a[m] <= y) {
						r = m - 1;
						lbest = m;
					} else if (x > sm - a[m]) {
						r = m - 1;
					} else {
						l = m + 1;
					}
				}
				l = i + 1;
				r = n - 1;
				while (l <= r) {
					m = l + (r - l) / 2;
					if (x <= sm - a[m] && sm - a[m] <= y) {
						l = m + 1;
						rbest = m;
					} else if (x > sm - a[m]) {
						r = m - 1;
					} else {
						l = m + 1;
					}
				}
				//cout << sum << " sm = " << sm << " " << "-----> "<< a[i] << " " << lbest << " " << rbest << "\n";

				if (lbest != -1)
					res += rbest - lbest + 1;

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
