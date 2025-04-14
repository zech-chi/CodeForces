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
	int n;
	int m;
	vector<string> grid;
	vector<vector<bool> > visited;
	int found_circle;

public:
	void	dfs(int cnt, int start_r, int start_c, int r, int c) {
		if (r == start_r && c == start_c && cnt >= 4) {
			found_circle = true;
		}
		if (found_circle)
			return ;
		if (visited[r][c] || grid[r][c] != grid[start_r][start_c]) 
			return ;

		visited[r][c] = true;

		if (c + 1 < m)
			dfs(cnt + 1, start_r, start_c, r, c + 1);

		if (r + 1 < n)
			dfs(cnt + 1, start_r, start_c, r + 1, c);

		if (c - 1 >= 0)
			dfs(cnt + 1, start_r, start_c, r, c - 1);

		if (r - 1 >= 0)
			dfs(cnt + 1, start_r, start_c, r - 1, c);
	
	}

	void init() {
		cin >> n >> m;
		
		for (int r = 0; r < n; r++) {
			string line; cin >> line;
			grid.push_back(line);
		}

		for (int r = 0; r < n; r++) {
			vector<bool> line(m, false);
			visited.push_back(line);
		}
		
		found_circle = false;
	}

	void reset() {
		for (int r = 0; r < n; r++) {
			for (int c = 0; c < m; c++) {
				visited[r][c] = false;
			}
		}
	}

    void solve() {
		init();

		for (int r = 0; r < n; r++) {
			for (int c = 0; c < m; c++) {
				dfs(1, r, c, r, c);
				if (found_circle) {
					cout << "Yes\n";
					return ;
				}
				reset();
			}
		}

		cout << "No\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
