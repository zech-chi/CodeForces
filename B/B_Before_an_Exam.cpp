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
		int d, sum_time; cin >> d >> sum_time;
		vector<pair<int, int>> vv;
		int min_time, max_time;
		int sum_min_time = 0, sum_max_time = 0;
		vector<int> res(d);
		int left_time = sum_time;

		for (int i = 0; i < d; i++) {
			cin >> min_time >> max_time;
			sum_min_time += min_time;
			sum_max_time += max_time;
			res[i] = min_time;
			left_time -= min_time;
			vv.push_back({min_time, max_time});
		}

		if (sum_time < sum_min_time || sum_max_time < sum_time) {
			cout << "NO\n";
			return ;
		}

		int i = 0;
		while (i < d) {
			int diff = vv[i].second - vv[i].first;
			if (diff <= left_time) {
				left_time -= diff;
				res[i] = vv[i].second;
			} else {
				res[i] += left_time;
				break;
			}
			i++;		
		}

		cout << "YES\n";
		for (int i = 0; i < d; i++) {
			cout << res[i] << " ";
		}
		cout << "\n";

    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
