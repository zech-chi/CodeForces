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
		string s; cin >> s;
		vector<int> v(s.size());

		v[0] = 0;

		for (int i = 1; i < s.size(); i++) {
			v[i] = (s[i] == s[i - 1]) + v[i - 1];
		}


		int m, l, r; cin >> m;

		while (m--) {
			cin >> l >> r;
			l--; r--;
			int ans = v[r];
			if (l > 0)
				ans -= v[l];

			cout << ans << "\n";
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
