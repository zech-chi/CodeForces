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
        string s;
        while (t--) {
            cin >> s;
            int i = s.size() - 1;
            while (i >= 0 && s[i] == '0') {
                i--;
            }
            int cnt = 0;

            for (int j = 0; j < i; j++) {
                if (s[j] != '0') cnt++;
            }

            cnt += s.size() - i - 1;
            cout << cnt << "\n";
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
