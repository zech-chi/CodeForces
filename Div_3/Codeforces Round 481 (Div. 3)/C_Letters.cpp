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
        int n, m; cin >> n >> m;
        vector<ll> aa(n), bb(m);

        for (auto &a: aa) cin >> a;
        for (auto &b: bb) cin >> b;

        vector<ll> prefix_sum = aa;
        for (int i = 1; i < prefix_sum.size(); i++) {
            prefix_sum[i] += prefix_sum[i - 1];
        }

        int idx;
        ll room;

        for (auto &b: bb) {
            idx = lower_bound(prefix_sum.begin(), prefix_sum.end(), b) - prefix_sum.begin();
            if (idx == 0) room = b;
            else room = b - prefix_sum[idx - 1];
            cout << idx + 1 << " " << room << "\n";
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
