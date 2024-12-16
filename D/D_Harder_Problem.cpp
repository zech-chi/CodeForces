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
			int n; cin >> n;
			vector<int> v(n);
			set<int> inv;
			set<int> seen;
			int x = 1;
			for (int i = 0; i < n; i++) {
				cin >> v[i];
				inv.insert(v[i]);
			}

			for (int i = 0; i < n; i++) {
				if (seen.find(v[i]) == seen.end()) {
					cout << v[i] << " ";
					seen.insert(v[i]);
				} else {
					while (inv.find(x) != inv.end())
						x++;
					cout << x << " ";
					x++;
				}
			}
			cout << "\n";

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
