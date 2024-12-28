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
        string s; cin >> s;
        int cnt_1 = 0;
        string res;
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (c != '1')
                res += c;
            else
            cnt_1++;
        }
        int n = res.size();
        int j = 0;
        while (j < n && res[j] == '0')
            j++;
        for (int x = 0; x < j; x++) cout << res[x];
        for (int x = 0; x < cnt_1; x++) cout << '1';
        for (int x = j; x < n; x++) cout << res[x];
        cout << '\n';
        
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
