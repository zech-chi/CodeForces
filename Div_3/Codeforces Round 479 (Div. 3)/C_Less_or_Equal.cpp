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
        vector<int> v(n);

        for (int i = 0; i < n; i++) cin >> v[i];

        sort(v.begin(), v.end());
        
        if (k == 0)
            cout << (v[0] == 1 ? - 1 : 1) << "\n";
        else if (k < n && v[k - 1] == v[k])
            cout << "-1\n";
        else
            cout << v[k - 1] << "\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
