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
        string s; cin >> s;
        vector<int> cnt(26, 0);

        for (char &c: s) {
            cnt[c - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (k < cnt[i]) {
                cnt[i] -= k;
                k = 0;
            } else {
                k -= cnt[i];
                cnt[i] = 0;
            }

            if (k == 0) break;
        }

        string ans = "";

        for (int i = n - 1; i >= 0; i--) {
            if (cnt[s[i] - 'a']) {
                ans += s[i];
                cnt[s[i] - 'a']--;
            }
        }

        reverse(ans.begin(), ans.end());
        cout << ans << "\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
