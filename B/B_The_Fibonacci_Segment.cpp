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
#include <deque>
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
		
		if (n < 3) {
			cout << n << "\n";
			return ;
		}

		int maxi = 0;
		int cur = 2;
		int prev1 = v[0];
		int prev2 = v[1];

		for (int i = 2; i < n; i++) {
			if (prev1 + prev2 == v[i]) {
				cur++;
			} else {
				maxi = max(maxi, cur);
				cur = 2;
			}
			prev1 = prev2;
			prev2 = v[i];
		}

		maxi = max(maxi, cur);

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
