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
		int n, s, t; cin >> n >> s >> t;
		vector<int> p(n + 1);

		for (int i = 1; i <= n; i++) {
			cin >> p[i];
		}

		int moves = 0;
		vector<bool> visited(n + 1, false);

		while (s != t && !visited[s]) {
			visited[s] = true;
			s = p[s];
			moves++;
		}


		if (s != t) cout << "-1\n";
		else cout << moves << "\n";

    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
