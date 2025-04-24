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
            ll n; cin >> n;
            string s; cin >> s;
            ll cnt_0 = 0;
            ll cnt_1 = 0;

            for (char c: s) {
                if (c == '-') ++cnt_0;
                else ++cnt_1;
            }

            ll res = cnt_1 * floor(cnt_0 / 2.0) * ceil(cnt_0 / 2.0);
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
