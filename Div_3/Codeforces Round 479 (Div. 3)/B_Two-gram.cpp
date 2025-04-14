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
        string s; cin >> s;
        map<string, int> mp;

        for (int i = 0; i < s.size() - 1; i++) {
            mp[s.substr(i, 2)]++;
        }

        int maxi = 0;
        string ans;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second > maxi) {
                maxi = it->second;
                ans = it->first;
            }
        }

        ans += "\n";
        cout << ans;
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
