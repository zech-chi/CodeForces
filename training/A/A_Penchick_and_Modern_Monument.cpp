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
            int a;
            int cur;
            int maxi = 1;
            int cnt = 1;

            for (int i = 0; i < n; i++) {
                cin >> a;
                if (i == 0 || cur != a) {
                    cur = a;
                    maxi = max(maxi, cnt);
                    cnt = 1;
                } else {
                    cnt++;
                }
            }
            maxi = max(maxi, cnt);
            
            cout << n - maxi << "\n";

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

/*
6
6

*/