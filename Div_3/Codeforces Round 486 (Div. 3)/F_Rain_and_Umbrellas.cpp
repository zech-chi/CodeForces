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
        int a, n, m; cin >> a >> n >> m;
        int l, r;
        int x, p;
        vector<pair<int, int>> rain(n);
        vector<pair<int, int>> umbrella(m);

        for (int i = 0; i < n; i++) {
            cin >> l >> r;
            rain[i] = {l, r};
        }

        for (int i = 0; i < m; i++) {
            cin >> x >> p;
            umbrella[i] = {x, p};
        }

        sort(rain.begin(), rain.end());
        sort(umbrella.begin(), umbrella.end());

        if (rain[0].first < umbrella[0].first) {
            cout << "-1\n";
            return ;
        }

        for (int i = 0; i < n; i++) {
            cout << rain[i].first << " " << rain[i].second << "\n\n";
        }

        cout << "\n";

        for (int i = 0; i < m; i++) {
            cout << umbrella[i].first << " " << umbrella[i].second << "\n\n";
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
