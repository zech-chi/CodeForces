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

class MedianFinder {
private:
    std::priority_queue<ll> maxHeap;
    std::priority_queue<ll, std::vector<ll>, std::greater<ll> > minHeap;
public:
    void add(ll num) {
        maxHeap.push(num);

        if (!minHeap.empty() && maxHeap.top() > minHeap.top()) {
            ll maxTop = maxHeap.top(); maxHeap.pop();
            ll minTop = minHeap.top(); minHeap.pop();
            maxHeap.push(minTop);
            minHeap.push(maxTop);
        }

        if (maxHeap.size() > minHeap.size() + 1) {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
        else if (minHeap.size() > maxHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }

    ll get_median() const {
        return maxHeap.top();
    }
};


class Solution {
private:

public:
    void help() {
                    ll n, k; cin >> n >> k;
            vector<ll> vv(n); for (auto &a: vv) cin >> a;

            MedianFinder mfx;
            MedianFinder mfy;
            bool flagx = false;
            bool flagy = false;
            ll l = 0;
            ll r = n - 1;
            while (l < n) {
                mfx.add(vv[l]);
                if (mfx.get_median() <= k) {
                    flagx = true;
                    break;
                }
                l++;
            }

            while (r > l) {
                mfy.add(vv[r]);
                if (mfy.get_median() <= k) {
                    flagy = true;
                    break;
                }
                r--;
            }

            if (flagx && flagy) {
                cout << "YES\n";
                return;
            }

            MedianFinder mfx1;
            l = 0;

            while (l < n) {
                mfx1.add(vv[l]);
                if (mfx1.get_median() <= k) {
                    MedianFinder mfy1;
                    int r = l + 1;
                    while (r < n) {
                        mfy1.add(vv[r]);
                        if (mfy1.get_median() <= k) {
                            cout << "YES\n";
                            return;
                        }
                        r++;
                    }
                }
                l++;
            }

            MedianFinder mfx2;
            r = n - 1;

            while (r >= 0) {
                mfx2.add(vv[r]);
                if (mfx2.get_median() <= k) {
                    MedianFinder mfy2;
                    int l = r - 1;
                    while (l >= 0) {
                        mfy2.add(vv[l]);
                        if (mfy2.get_median() <= k) {
                            cout << "YES\n";
                            return;
                        }
                        l--;
                    }
                }
                r--;
            }


            cout << "NO\n";
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
