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
		vector<int> vv(n + 1, true);
		int a, b;

		for (int i = 0; i < m; i++) {
			cin >> a >> b;
			vv[a] = false;
			vv[b] = false;
		}
		
		for (int i = 1; i <= n; i++) {
			if (vv[i] == true) {
				cout << n - 1 << "\n";
				for (int j = 1; j <= n; j++) {
					if (j == i) continue;
					cout << i << " " << j << "\n";
				}

				break;
			}
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
