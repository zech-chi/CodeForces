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
    vector<ll> res;

public:
    void dfs(map<ll, int>& mp, vector<ll> &result , ll x, int len) {
        if (!res.empty())
            return;
        if (result.size() == len) {
            res = result;
            return;
        }

        if (x % 3 == 0 && mp[x / 3]) {
            mp[x / 3]--;
            result.push_back(x / 3);
            dfs(mp, result, x / 3, len);
            result.pop_back();
            mp[x / 3]++;
        }
        if (mp[x * 2]) {
            mp[x * 2]--;
            result.push_back(x * 2);
            dfs(mp, result, x * 2, len);
            result.pop_back();
            mp[x * 2]++;
        }
    }

    void solve() {
        ll n; cin >> n;
        vector<ll> v(n);
        for (ll &a: v) cin >> a;
        map<ll, int> mp;
        for (ll a: v) mp[a]++;

        for (ll a: v) {
            vector<ll> result;
            result.push_back(a);
            mp[a]--;
            dfs(mp, result, a, n);
            mp[a]++;
        }

        for (ll a: res) cout << a << " ";
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
