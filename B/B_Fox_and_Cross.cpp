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
		vector<vector<char> > grid(n, vector<char>(n));

		for (int r = 0; r < n; r++) {
			for (int c = 0; c < n; c++) {
				cin >> grid[r][c];
			}
		}


		for (int r = 1; r < n - 1; r++) {
			for (int c = 1; c < n - 1; c++) {
				if (grid[r][c] == '#'
				  && grid[r - 1][c] == '#'
				  && grid[r + 1][c] == '#'
				  && grid[r][c - 1] == '#'
				  && grid[r][c + 1] == '#') {
					
					grid[r][c] = '.';
					grid[r - 1][c] = '.';
					grid[r + 1][c] = '.';
					grid[r][c - 1] = '.';
					grid[r][c + 1] = '.';
				}
			}
		}

		for (int r = 0; r < n; r++) {
			for (int c = 0; c < n; c++) {
				if (grid[r][c] == '#') {
					cout << "NO\n";
					return ;
				}
			}
		}

		cout << "YES\n";
	}

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
