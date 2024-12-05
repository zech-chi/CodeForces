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
			ll n; cin >> n;
			vector<ll> v(n);
			ll sum = 0;
			for (ll i = 0; i < n; i++) {
				cin >> v[i];
				sum += v[i];
			}

			if (sum % n != 0) {
				cout << "NO\n";
				continue;
			}

			ll middle = sum / n;
			
			for (ll i = 1; i < n - 1; i++) {
				if (v[i - 1] > middle) {
					ll diff = v[i - 1] - middle;
					v[i + 1] += diff;
					v[i - 1] -= diff;
				} else {
					ll diff = middle - v[i - 1];
					v[i - 1] += diff;
					v[i + 1] -= diff;
				}		
			}

			string res = "YES\n";
			for (ll i = 0; i < n; i++) {
				if (v[i] != middle) {
					res = "NO\n";
					break;
				}
			}

			cout << res;

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
