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
        ll n, m; cin >> n >> m;
        vector<ll> vv(n); for (ll &a: vv) cin >> a;
        vector<vector<ll>> reminders(m);

        for (ll i = 0; i < n; i++) {
            reminders[vv[i] % m].push_back(i); 
        }

        ll sum_i = accumulate(vv.begin(), vv.end(), 0LL);

        ll j = 0;
        for (ll i = 0; i < m; i++) {
            while ((ll)reminders[i].size() > n / m) {
                while (j < i || (ll)reminders[j % m].size() >= n / m) {
                    ++j;
                }
                ll k = reminders[i].back();
                reminders[i].pop_back();
                vv[k] += (j - i + m) % m;
                reminders[j % m].push_back(k);
            }
        }

        ll sum_f = accumulate(vv.begin(), vv.end(), 0LL);

        cout << sum_f - sum_i << "\n";
        for (auto &a: vv) cout << a << " ";
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
