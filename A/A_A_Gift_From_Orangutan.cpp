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
            int maxi, mini;
            int a;
            for (int i = 0; i < n; i++) {
                cin >> a;
                if (i == 0) {
                    maxi = a;
                    mini = a;
                }
                maxi = max(maxi, a);
                mini = min(mini, a);
            }

            cout << (n - 1) * (maxi - mini) << "\n";
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