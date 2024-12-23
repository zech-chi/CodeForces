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
		int i, j;
		vector<int> a(n);
		for (i = 0; i < n; i++) cin >> a[i];
		int m; cin >> m;
		vector<int> b(m);
		for (i = 0; i < m; i++) cin >> b[i];

		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		i = 0;
		j = 0;
		int res = 0;
		while (i < n && j < m) {
			if (abs(a[i] - b[j]) <= 1) {
				res++;
				i++;
				j++;
			} else if (a[i] > b[j]) {
				j++;
			} else {
				i++;
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
