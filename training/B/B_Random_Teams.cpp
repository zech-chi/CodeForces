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
	ll count_friends(ll x) {
		return (x * (x - 1)) / 2;
	}

    void solve() {
		ll n, m; cin >> n >> m;
		ll maxi = count_friends(n - m + 1);
		ll div = n / m;
		ll mod = n % m;
		ll mini = count_friends(div) * (m - mod) + count_friends(div + 1) * (mod);

		cout << mini << " " << maxi << "\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
