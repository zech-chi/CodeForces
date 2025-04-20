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
        int n, k; cin >> n >> k;
        vector<int> vv(n); for (int &a: vv) cin >> a;

        int cnt_l = 0, cnt_r = 0;
        int l = 0, r = n - 1;

        while (l < n) {
            if (vv[l] > k) break;
            cnt_l++;
            l++;
        }

        while (r >= 0) {
            if (vv[r] > k) break;
            cnt_r++;
            r--;
        }

        if (l > r) {
            cout << n << "\n";
        } else {
            cout << cnt_l + cnt_r << "\n";
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
