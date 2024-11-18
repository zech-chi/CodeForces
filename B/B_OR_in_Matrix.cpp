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
		int m, n; cin >> m >> n;
		vector<int> rows, cols;
		vector<vector<int> > A(m, vector<int>(n, 1));
		vector<vector<int> > B(m, vector<int>(n));
		int x;

		for (int r = 0; r < m; r++) {
			for (int c = 0; c < n; c++) {
				cin >> B[r][c];
				if (B[r][c] == 0) {
					rows.push_back(r);
					cols.push_back(c);
				}
			}
		}
		

		for (int i = 0; i < rows.size(); i++) {
			int r = rows[i];
			for (int c = 0; c < n; c++) {
				A[r][c] = 0;
			}
		}

		for (int i = 0; i < cols.size(); i++) {
			int c = cols[i];
			for (int r = 0; r < m; r++) {
				A[r][c] = 0;
			}
		}


		for (int r = 0; r < m; r++) {
			for (int c = 0; c < n; c++) {
				int _or = 0;
				for (int rr = 0; rr < m; rr++) {
					_or |= A[rr][c];
				}

				for (int cc = 0; cc < n; cc++) {
					_or |= A[r][cc];
				}

				if (_or != B[r][c]) {
					cout << "NO\n";
					return ;
				}
			}
		}

		cout << "YES\n";
		for (int r = 0; r < m; r++) {
			for (int c = 0; c < n; c++) {
				cout << A[r][c] << " ";
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
