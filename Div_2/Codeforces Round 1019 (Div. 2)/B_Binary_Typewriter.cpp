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
    int cal_cost(string &s) {
        int cost = 0;
        char cur = '0';
        for (char c: s) {
            if (cur != c) {
                cur = c;
                ++cost;
            }
            ++cost;
        }
        return cost;
    }

    void solve() {
        int t; cin >> t;
        while (t--) {
            int n; cin >> n;
            string s; cin >> s;
            int ans = cal_cost(s);
            int change = 0;
            for (int i = 1; i < n; ++i) {
                if (s[i] != s[i - 1]) change++;
            }

            if (s[0] == '0') --change;

            if (change == 1) ans -= 1;
            else if (change > 1) ans -= 2;
            
            cout << ans << "\n";
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
