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
        int k; cin >> k;
        int n, a, sum;
        int diff;
        vector<vector<int>> vv(k);
        map<int, pair<int, int>> mp; 

        for (int i = 0; i < k; i++) {
            cin >> n;
            for (int j = 0; j < n; j++) {
                cin >> a;
                vv[i].push_back(a);
            }
        }

        for (int i = 0; i < k; i++) {
            sum = accumulate(vv[i].begin(), vv[i].end(), 0);
            for (int j = 0; j < vv[i].size(); j++) {
                diff = sum - vv[i][j];
                auto it = mp.find(diff);
                if (it == mp.end()) {
                    mp[diff] = {i, j};
                } else {
                    if (it->second.first != i) {
                        cout << "YES\n";
                        cout << (it->second.first + 1) << " " << (it->second.second + 1) << "\n";
                        cout << (i + 1) << " " << (j + 1) << "\n";
                        return;
                    }
                }
            }
        }

        cout << "NO\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
