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
        set<ll> st;
        vector<ll> res;
        ll a, x, y;

        for (int i = 0; i < n; i++) {
            cin >> a;
            st.insert(a);
        }

        for (int a: st) {
            for (int j = 0; j < 32; j++) {
                ll pow2 = (ll)1 << j;
                x = a - pow2;
                y = a + pow2;
                auto itx = st.find(x);
                auto ity = st.find(y);

                if (itx != st.end() && ity != st.end()) {
                    cout << "3\n";
                    cout << x << " " << a << " " << y << "\n";
                    return;
                }
                else if (itx != st.end()) {
                    res = {x, a};
                }
                else if (ity != st.end()) {
                    res = {a, y};
                }
            }
        }

        if (res.empty()) {
            cout << "1\n" << *(st.begin()) << "\n";
            return;
        }
        cout << res.size() << "\n";
        for (int a: res) {
            cout << a << " ";
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
