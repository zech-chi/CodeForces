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
		int n, m, k; cin >> n >> m >> k;
		set<int> holes;
		int h;
		int u, v;
		int res = 1;
		int fall_on_hole = -1;

		for (int i = 0; i < m; i++) {
			cin >> h;
			holes.insert(h);
		}

		if (holes.find(1) != holes.end())
			fall_on_hole = 1;

		while (k--) {
			cin >> u >> v;
			if (u == res) {
				if (holes.find(v) == holes.end())
					res = v;
				else if (fall_on_hole == -1)
					fall_on_hole = v;
			} else if (v == res) {
				if (holes.find(u) == holes.end())
					res = u;
				else if (fall_on_hole == -1)
					fall_on_hole = u;
			}
		}

		if (fall_on_hole != -1)
			cout << fall_on_hole << "\n";
		else
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
