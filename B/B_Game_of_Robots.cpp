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
	ll sum(ll x) {
		return ((x * (x + 1)) / 2);
	}


    void solve() {
		ll n, k; cin >> n >> k;
		vector<ll> v(n);

		for (ll i = 0; i < n; i++) {
			cin >> v[i];
		}

		ll left, right, mid, best = 0;

		left = 1;
		right = n;

		while (left <= right) {
			mid = left + (right - left) / 2;
			if (sum(mid) < k) {
				best = mid;
				left = mid + 1;
			} else {
				right = mid - 1;
			}
		}

		best = k - sum(best) - 1;

		cout << v[best] << "\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
