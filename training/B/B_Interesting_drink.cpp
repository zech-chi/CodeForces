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
		int n; cin >> n;
		vector<int> shops(n);

		for (int i = 0; i < n; i++) {
			cin >> shops[i];
		}
		
		sort(shops.begin(), shops.end());

		int q; cin >> q;
		int m;

		while (q--) {
			cin >> m;
			int left = 0, right = n - 1, mid;
			int best = -1;
			while (left <= right) {
				mid = left + (right - left) / 2;
				if (shops[mid] <= m) {
					best = mid;
					left = mid + 1;
				} else {
					right = mid - 1;
				}
			}

			cout << best + 1 << "\n";
		
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
