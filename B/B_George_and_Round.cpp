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
		int n, m; cin >> n >> m;
		vector<pair<int, bool> > aa(n), bb(m);
		int a, b;
		
		for (int i = 0; i < n; i++) {
			cin >> a;
			aa[i] = make_pair(a, false);
		}
		for (int i = 0; i < m; i++) {
			cin >> b;
			bb[i] = make_pair(b, false);
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (aa[i].first == bb[j].first) {
					aa[i].second = true;
					bb[j].second = true;
					break;
				}
			}
		}
		
		int res = 0;
		bool flag;
		for (int i = 0; i < n; i++) {
			if (aa[i].second == true)
				continue;
			flag = false;
			for (int j = 0; j < m; j++) {
				if (bb[j].first > aa[i].first && bb[j].second == false) {
					aa[i].second = true;
					bb[j].second = true;
					flag = true;
					break;
				}
			}
			if (!flag)
				res++;
		}

		cout << res << "\n";

    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
