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
		int n, m, d; cin >> n >> m >> d;
		vector<int> v(m * n);
		
		for (int i = 0; i < m * n; i++) {
			cin >> v[i];
		}

		sort(v.begin(), v.end());

		ll moves = 0;
		int middle = v[(m * n) / 2];

		for (int i = 0; i < m * n; i++) {
			int diff = abs(middle - v[i]);
			if (diff % d) {
				cout << "-1\n";
				return ;
			}
			moves += diff / d;
		}

		cout << moves << "\n";

    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
