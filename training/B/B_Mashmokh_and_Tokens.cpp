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
        ll n, a, b; cin >> n >> a >> b;
        ll x;
        ll l, r, m, best;
        ll y;

        for (ll i = 0; i < n; i++) {
            cin >> x;
            y = (x * a) / b;
            if (y == 0) {
                cout << x << " ";
                continue;
            }
            l = 1;
            r = x;
            best = 0;
            while (l <= r) {
                m = l + (r - l) / 2;
                ll yy = ((m * a) / b);
                if (yy == y) {
                    best = m;
                    r = m - 1;
                } else {
                    l = m + 1;
                }
            }

            cout << x - best << " ";
        }
        cout << "\n";
    }   

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
