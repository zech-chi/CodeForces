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
		vector<vector<int> > g(5, vector<int>(5));
		for (int r = 0; r < 5; r++) {
			for (int c = 0; c < 5; c++) {
				cin >> g[r][c];
			}
		}

		vector<string> perm;
		string digits = "01234";

		while (1) {
			perm.push_back(digits);
			if (!next_permutation(digits.begin(), digits.end()))
				break;
		}


		ll maxi = 0;
		ll cur;
		for (int i = 0; i < perm.size(); i++) {
			cur = 0;
			int a = perm[i][0] - '0';
			int b = perm[i][1] - '0';
			int c = perm[i][2] - '0';
			int d = perm[i][3] - '0';
			int e = perm[i][4] - '0';

			cur += g[a][b] + g[b][a] + g[c][d] + g[d][c];
			cur += g[b][c] + g[c][b] + g[d][e] + g[e][d];
			cur += g[c][d] + g[d][c];
			cur += g[d][e] + g[e][d];

			maxi = max(maxi, cur);
		}

		cout << maxi << "\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
