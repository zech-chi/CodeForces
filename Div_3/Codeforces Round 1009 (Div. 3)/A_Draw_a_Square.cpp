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
    double distance(double x1, double y1, double x2, double y2) {
        return ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    }

    void solve() {
        int t; cin >> t;
        while (t--) {
            int l, r, d, u; cin >> l >> r >> d >> u;
            vector<double> dd;
            dd.push_back(distance(-l, 0, r, 0));
            dd.push_back(distance(-l, 0, 0, -d));
            dd.push_back(distance(-l, 0, 0, u));
            dd.push_back(distance(r, 0, 0, -d));
            dd.push_back(distance(r, 0, 0, u));
            dd.push_back(distance(0, -d, 0, u));

            sort(dd.begin(), dd.end());
            if (dd[0] != dd[1] || dd[1] != dd[2] || dd[2] != dd[3] || dd[4] != dd[5])
                cout << "NO\n";
            else
                cout << "YES\n";
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
