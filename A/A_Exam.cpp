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
        if (n == 4) {
            cout << "4\n3 1 4 2\n";
            return;
        }

        vector<int> res;
        int first_half = ceil(n / 2.0);
        int x = 1;

        for (int i = 0; i < first_half; i++) {
            res.push_back(x);
            x += 2;
        }

        for (int j = 2; j <= n; j += 2) {
            if (abs(j - res[res.size() - 1]) > 1)
                res.push_back(j);
        }

        cout << res.size() << "\n";
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
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
