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
			int n, m; cin >> n >> m;
			vector<string> s(n);

			for (int i = 0; i < n; i++) {
				cin >> s[i];
			}

			int res = 0;
			int cur_len = 0;
			int i = 0;
			while (i < n) {
				if (cur_len + s[i].size() <= m) {
					cur_len += s[i].size();
					res++;
				} else 
					break;
				i++;
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
