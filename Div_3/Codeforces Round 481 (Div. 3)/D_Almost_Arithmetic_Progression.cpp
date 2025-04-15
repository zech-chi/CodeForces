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
        int n; cin >> n;
        vector<int> v(n); for (auto &a: v) cin >> a;

        if (n <= 2) {
            cout << "0\n";
            return;
        }
        int res = INT_MAX;

        for (int x = -1; x <= 1; x++) {
            for (int y = -1; y <= 1; y++) {
                int first = v[0] + x;
                int second = v[1] + y;
                int diff = second - first;
                bool flag = true;
                int cnt = abs(x) + abs(y);

                for (int z = 2; z < n; z++) {
                    int cur = first + z * diff;
                    if (abs(cur - v[z]) > 1) {
                        flag = false;
                        break;
                    }
                    if (cur != v[z]) cnt++;
                }

                if (flag) {
                    res = min(res, cnt);
                }

            }
        }

        if (res == INT_MAX) res = -1;
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
