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
            if (n % 2 == 0) {
                cout << "-1\n";
                continue;
            }
            vector<int> res(n);
            res[0] = 0;
            int j = 0;
            for (int i = 1; i < n; i++) {
                res[i] = (j + 2) % n;
                j += 2;
            }

            for (int i = 0; i < n; i++) {
                cout << res[i] + 1 << " ";
            }
            cout << "\n";
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
