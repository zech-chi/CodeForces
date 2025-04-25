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
    void help() {
        ll n, m; cin >> n >> m;
        vector<ll> aa(n); for (auto &a: aa) cin >> a;
        vector<ll> bb(m); for (auto &b: bb) cin >> b;
        vector<ll> llbb(m, -1);
        vector<ll> rrbb(m, -1);
    
        ll l = 0;
        ll i = 0;

        while (l < m && i < n) {
            if (aa[i] >= bb[l]) {
                llbb[l] = i;
                l++;
            }
            i++;
        }

        if (l == m) {
            cout << "0\n";
            return;
        }

        ll r = m - 1;
        i = n - 1;
        while (r >= 0 && i >= 0) {
            if (aa[i] >= bb[r]) {
                rrbb[r] = i;
                r--;
            }
            i--;
        }

        // for (int i = 0; i < m; i++) {
        //     cout << llbb[i] << " ";
        // }
        // cout << "\n";

        // for (int i = 0; i < m; i++) {
        //     cout << rrbb[i] << " ";
        // }
        // cout << "\n";

        ll best_l = 0, best_r = m - 1;
        l = 0;

       
    }

    void solve() {
        ll t; cin >> t;
        while (t--) {
            help();
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
