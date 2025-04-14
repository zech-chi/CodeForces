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
		int t, sx, sy, ex, ey; cin >> t >> sx >> sy >> ex >> ey;
		vector<int> east;
		vector<int> south;
		vector<int> west;
		vector<int> north;
		char move;

		for (int i = 1; i <= t; i++) {
			cin >> move;
			if (move == 'E') east.push_back(i);
			else if (move == 'S') south.push_back(i);
			else if (move == 'W') west.push_back(i);
			else north.push_back(i);
		}
		
		int diff_x = ex - sx;
		int diff_y = ey - sy;
		int res = 0;

		if (diff_x > 0) {
			if (diff_x > east.size()) {
				cout << "-1\n";
				return;
			}
			res = east[diff_x - 1]; 
		} else if (diff_x < 0) {
			diff_x = abs(diff_x);
			if (diff_x > west.size()) {
				cout << "-1\n";
				return;
			}
			res = west[diff_x - 1];
		}

		if (diff_y > 0) {
			if (diff_y > north.size()) {
				cout << "-1\n";
				return;
			}
			res = max(res, north[diff_y - 1]);
		} else if (diff_y < 0) {
			diff_y = abs(diff_y);
			if (diff_y > south.size()) {
				cout << "-1\n";
				return;
			}
			res = max(res, south[diff_y - 1]);
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
