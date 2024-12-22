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

		while (t--) {
			int n, a, b, c; cin >> n >> a >> b >> c;
			int total = a + b + c;
			int days = n / total;
			total *= days;
			days *= 3;

			if (total < n) {
				total += a;
				days++;
			}
			if (total < n) {
				total += b;
				days++;
			}
			if (total < n) {
				total += c;
				days++;
			}


			cout << days << "\n";
		
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
