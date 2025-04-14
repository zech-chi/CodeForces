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
        int n, k; cin >> n >> k;
        string ss(n, 'S');
        vector<string> res(n);
        string cur;

        for (int r = 0; r < n; r++) {
            cur = "";
            if (k > 0) {
                for (int c = 0; c < n; c++) {
                    if (r % 2) {
                        if (c % 2 && k > 0) {
                            cur += "L";
                            k--;
                        } else {
                            cur += "S";
                        }
                    } else {
                        if (c % 2 == 0 && k > 0) {
                            cur += "L";
                            k--;
                        } else {
                            cur += "S";
                        }
                    }
                }
                res[r] = cur;
            } else {
                res[r] = ss;
            }
        }

        if (k > 0) {
            cout << "NO\n";
            return;
        }

        cout << "YES\n";
        for (int r = 0; r < n; r++) {
            cout << res[r] << "\n";
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