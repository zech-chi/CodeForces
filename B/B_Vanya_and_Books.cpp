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
		ll n; cin >> n;
   		ll res = 0;
		ll prev = 1; // 10 100 1000
		ll next = 9; // 99 999 9999
		ll size = 1;

		while (next < n) {
			res += (next - prev + 1) * size;
			size++;
			prev *= 10;
			next *= 10;
			next += 9;
		}

		res += (n - prev + 1) * size;

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
