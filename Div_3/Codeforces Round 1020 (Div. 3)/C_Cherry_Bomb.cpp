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
        ll n, k; cin >> n >> k; 
        vector<ll> aa(n); for (auto &a: aa) cin >> a;
        vector<ll> bb(n); for (auto &b: bb) cin >> b;
        
        bool all_neg_one = true;
        for (int b: bb) {
            if (b != -1) {
                all_neg_one = false;
                break;
            }
        }

        if (all_neg_one) {
            ll maxi = aa[0];
            ll mini = aa[0];
            for (auto &a: aa) {
                maxi = max(maxi, a);
                mini = min(mini, a);
            }

            ll l = 0;
            ll r = k;
            ll mid;
            ll result = 0;

            while (l <= r) {
                mid = l + (r - l) / 2;
                ll x_sum = mid + maxi;
                ll diff = x_sum - mini;
                if (diff > k) {
                    r = mid - 1;
                } else {
                    result = mid;
                    l = mid + 1;
                }
            }

            cout << result + 1 << "\n";
        } else {
            ll x;
            for (int i = 0; i < n; i++) {
                if (bb[i] != -1) {
                    x = aa[i] + bb[i];
                    break;
                }
            }

            ll sum;
            ll dif;

            for (int i = 0; i < n; i++) {
                if (bb[i] == -1) {
                    dif = x - aa[i];
                    if (dif < 0 || dif > k) {
                        cout << 0 << "\n";
                        return;
                    } 
                } else {
                    sum = aa[i] + bb[i];
                    if (sum != x) {
                        cout << 0 << "\n";
                        return;
                    }
                }
            }
            cout << 1 << "\n";
        }
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
