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
        vector<bool> primes(1e7 + 1, true);
        primes[0] = primes[1] = false;

        for (int i = 2; i <= 1e7; i++) {
            if (primes[i]) {
                for (int j = i + i; j <= 1e7; j += i) {
                    primes[j] = false;
                }
            }
        }
        int t; cin >> t;

        while (t--) {
            int n; cin >> n;
            ll cnt = 0;

            for (int i = 2; i <= n; i++) {
                if (primes[i]) cnt += (n / i);
            }
            cout << cnt << "\n";
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
