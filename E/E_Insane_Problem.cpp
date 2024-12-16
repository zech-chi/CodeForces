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
		ll k, l1, r1, l2, r2;
		ll left_side, right_side;	

		while (t--) {
			cin >> k >> l1 >> r1 >> l2 >> r2;
			left_side = l2 / r1;
			if (l2 % r1 == 0)
				left_side--;
			right_side = r2 / l1;
			ll n = 0;
			ll cnt = 0;
			ll power = pow(k, n);
			while (power <= right_side) {
				if (power > left_side) {
					ll first_x = 1e9;
					if (power * l1 > r2)
						break;
					ll last_x = -100; 
					{
    					ll l = l1, r = r1, m;
    					while (l <= r) {
    						m = l + (r - l) / 2;
    						if (l2 <= power * m && power * m <= r2) {
    							last_x = m;
    							l = m + 1;
    						} else if (power * m > r2) {
    							r = m - 1;
    						} else {
    							l = m + 1;
    						}
    					}
					}
					{
    					ll l = l1, r = r1, m;
    					while (l <= r) {
    						m = l + (r - l) / 2;
    						if (l2 <= power * m && power * m <= r2) {
    							first_x = m;
    							r = m - 1;
    						} else if (power * m > r2) {
    							r = m - 1;
    						} else {
    							l = m + 1;
    						}
    					}
					}

                    if (last_x >= first_x)
					    cnt += (last_x - first_x + 1);
				}
				n++;
				power *= k;
			}

			cout << cnt << "\n";
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

