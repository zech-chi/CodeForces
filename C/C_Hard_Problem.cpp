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
		int t; cin >> t;
		int m, a, b, c;
		int diffa, diffb;
		while (t--) {
			cin >> m >> a >> b >> c;
			ll take_from_a = min(m, a);
			ll take_from_b = min(m, b);
			ll res = take_from_a + take_from_b;
			diffa = m - take_from_a;
			ll x = min(diffa, c);
			res += x;
			c -= x;
			diffb = m - take_from_b;
			x = min(diffb, c);
			res += x;
			cout << res << "\n";
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
