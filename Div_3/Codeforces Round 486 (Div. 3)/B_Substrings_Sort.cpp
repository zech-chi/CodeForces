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
        vector<string> vv(n); for (auto &s: vv) cin >> s;

        sort(vv.begin(), vv.end(), [](const string &a, const string &b) {
            return a.size() < b.size();
        });

        for (int i = 1; i < n; i++) {
            if (vv[i].find(vv[i - 1]) == string::npos) {
                cout << "NO\n";
                return ;
            }
        }

        cout << "YES\n";
        for (string &s: vv) {
            cout << s << "\n";
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
