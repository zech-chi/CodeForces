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
        int t; cin >> t;
        while (t--) {
            int n; cin >> n;
            vector<int> vv(n); for (auto &a: vv) cin >> a;
            vector<int> tab(10, 0);
            tab[0] = 3;
            tab[1] = 1;
            tab[2] = 2;
            tab[3] = 1;
            tab[5] = 1;

            int cnt = 0;

            for (int &a: vv) {
                if (a == 0 || a == 1 || a == 2 || a == 3 || a == 5)
                    tab[a]--;
                cnt++;
                bool flag = true;
                for (int x = 0; x < 10; x++) {
                    if (tab[x] > 0) {
                        flag = false;
                        break;
                    }
                }

                if (flag) break;
            }

            bool flag = true;
            for (int x = 0; x < 10; x++) {
                if (tab[x] > 0) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                cout << cnt << "\n";
            } else {
                cout << 0 << "\n";
            }
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
