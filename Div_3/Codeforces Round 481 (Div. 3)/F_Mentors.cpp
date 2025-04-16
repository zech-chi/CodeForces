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
        vector<int> rr(n); for (int &r: rr) cin >> r;
        vector<int> res(n, 0);
        map<int, int> mp;

        for (int &r: rr) {
            mp[r]++;
        }

        int cnt = 0;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            int tmp = it->second;
            it->second = cnt;
            cnt += tmp;
        }

        for (int i = 0; i < n; i++) {
            res[i] = mp[rr[i]];
        }



        while (k--) {
            int x, y; cin >> x >> y;
            x--; y--;

            if (rr[x] > rr[y]) {
                res[x]--;
            } else if (rr[x] < rr[y]) {
                res[y]--;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << res[i] << " ";
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
