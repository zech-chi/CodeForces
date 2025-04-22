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
    void help() {
        ll n, x; cin >> n >> x;
        vector<ll> vv(n); for (auto &a: vv) cin >> a;
        sort(vv.begin(), vv.end());

        int l, r;
        r = n - 1;
        int cnt = 0;

        while (r >= 0) {
            int cur_strength = 0;
            int l = r;
            while (l >= 0 && cur_strength < x) {
                cur_strength = vv[l] * (r - l + 1);
                l--;
            }

            if (cur_strength >= x) cnt++;
            r = l;
        }

        cout << cnt << "\n";
    }

    void solve() {
        int t; cin >> t;
        while (t--) {
            help();
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
