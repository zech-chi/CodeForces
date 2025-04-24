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
        ll t; cin >> t;
        while (t--) {
            ll n, x; cin >> n >> x;
            vector<ll> res(n);
            ll idx = 0;
            ll orv = 0;
            for (int i = 0; i < min(n, x); i++) {
                if (((i | orv) & x) == (i | orv)) {
                    res[idx++] = i;
                    orv |= i;
                }
            }

            while (idx < n) {
                res[idx++] = x;
            }

            if (orv != x) res[n - 1] = x; 

            for (int a: res) cout << a << " ";
            cout << "\n";
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
