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
		vector<int> v(n);

		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}

		sort(v.begin(), v.end());
		vector<bool> visited(n, false);

		int res = 0;

		for (int i = 0; i < n - 1; i++) {
			if (visited[i])
				continue;
			visited[i] = true;
			int last = v[i];
			for (int j = i + 1; j < n; j++) {
				if (v[j] > last && visited[j] == false) {
					visited[j] = true;
					res++;
					last = v[j];
				}
			}
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
