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
		string s; cin >> s;
		char x, y;
		vector<vector<int>> vv(26);

		for (int i = 0; i < n; i++) {
			char c = s[i];
			vv[c - 'a'].push_back(i);
		}

		for (int i = 0; i < m; i++) {
			cin >> x >> y;
			if (x == y) continue;
			swap(vv[x - 'a'], vv[y - 'a']);
		}
	
		for (int i = 0; i < 26; i++) {
			for (int j = 0; j < vv[i].size(); j++) {
				s[vv[i][j]] = 'a' + i;
			}
		}	

		cout << s << "\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
