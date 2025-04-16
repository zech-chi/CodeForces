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
        int n, w; cin >> n >> w;
        vector<int> vv(n); for (int &a: vv) cin >> a;

        int l, r, m;
        int best_l = -1, best_r = -1;

        // search for best_r
        l = 0;
        r = w;
        while (l <= r) {
            m = l + (r - l) / 2;
            int cnt = m;
            bool flag = true;
            for (int &a: vv) {
                cnt += a;
                if (cnt < 0) {
                    l = m + 1;
                    flag = false;
                    break;
                }
                if (cnt > w) {
                    r = m - 1;
                    flag = false;
                    break;
                }
            }

            if (flag) {
                best_r = m;
                l = m + 1;
            }
        } 

        // search for best_l
        l = 0;
        r = w;
        while (l <= r) {
            m = l + (r - l) / 2;
            int cnt = m;
            bool flag = true;
            for (int &a: vv) {
                cnt += a;
                if (cnt < 0) {
                    l = m + 1;
                    flag = false;
                    break;
                }
                if (cnt > w) {
                    r = m - 1;
                    flag = false;
                    break;
                }
            }

            if (flag) {
                best_l = m;
                r = m - 1;
            }
        } 

        if (best_r == -1) 
            cout << "0\n";
        else
            cout << best_r - best_l + 1 << "\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
