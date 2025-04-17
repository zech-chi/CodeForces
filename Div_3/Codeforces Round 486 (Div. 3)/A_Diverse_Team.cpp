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
        map<int, int> mp;
        int a;

        for (int i = 1; i <= n; i++) {
            cin >> a;
            mp[a] = i;
        }

        if (mp.size() < k) {
            cout << "NO\n";
            return;
        }
        cout << "YES\n";
        auto it = mp.begin();
        while (k--) {
            cout << it->second << " ";
            it++;
        }
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
