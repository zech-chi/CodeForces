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
		int n, s; cin >> n >> s;
		int x, y, k;
		vector<pair<double, int> > vv;

		while (n--) {
			cin >> x >> y >> k;
			vv.push_back(make_pair((double)sqrt(x * x + y * y), k));
		}

		sort(vv.begin(), vv.end());
		int i = 0;
		double min_r = -1;


		while (i < vv.size() && s < 1e6) {
			s += vv[i].second;
			min_r = vv[i].first; 
			i++;
		}

		if (s < 1e6) cout << "-1\n";
		else cout << fixed << setprecision(7) << min_r << "\n";

    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
