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
		vector<int> a(n);

		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (i > 0)
				a[i] += a[i - 1]; 
		}

		int m; cin >> m;
		int q;
		int l, r, mid;
		int pile;
		while (m--) {
			cin >> q;
			l = 0; r = n - 1;
			while (l <= r) {
				mid = l + (r - l) / 2;
				if (a[mid] >= q) {
					pile = mid;
					r = mid - 1;
				} else {
					l = mid + 1;
				}
			}
			pile++;

			cout << pile << "\n";
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
