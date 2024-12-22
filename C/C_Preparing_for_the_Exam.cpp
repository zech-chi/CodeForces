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
			int n, m, k; cin >> n >> m >> k;
			vector<bool> knows(n + 1, false);
			vector<int> a(m), q(k);

			for (int i = 0; i < m; i++) cin >> a[i];
			for (int i = 0; i < k; i++) cin >> q[i];

			if (k == n) {
				cout << string(m, '1') << "\n";
				continue;
			} else if (k == n - 1) {
				for (int i = 0; i < k; i++) {
					knows[q[i]] = true;
				}
				int not_found;
				for (int i = 1; i <= n; i++) {
					if (knows[i] == false) {
						not_found = i;
						break;
					}
				}	

				for (int i = 0; i < m; i++) {
					if (a[i] == not_found)
						cout << "1";
					else
						cout << "0";
				}
				cout << "\n";


			} else {
				cout << string(m, '0') << "\n";
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
