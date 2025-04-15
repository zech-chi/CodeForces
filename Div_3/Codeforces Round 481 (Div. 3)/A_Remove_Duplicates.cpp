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
        vector<int> res;
        vector<int> v(n);
        vector<bool> visited(1001, false);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for (int i = n - 1; i >= 0; i--) {
            if (!visited[v[i]]) {
                res.push_back(v[i]);
                visited[v[i]] = true;
            }
        }

        cout << res.size() << "\n";
        for (int i = res.size() - 1; i >= 0; i--) {
            cout << res[i] << " ";
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
