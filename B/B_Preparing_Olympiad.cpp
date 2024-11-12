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
    int n, l, r, x;
    vector<int> c;
    int res;

public:
    void dfs(int maxi, int mini, int i, int size, long long sum) {
        if (i > n)
            return ;
        if (size > 1 && l <= sum && sum <= r && maxi - mini >= x)
            res++;
        for (int j = i; j < n; j++) {
            dfs(max(maxi, c[j]), min(mini, c[j]), j + 1, size + 1, sum + c[j]);
        }
    }

    void solve() {
        cin >> n >> l >> r >> x;
        res = 0;
        int ci;
        for (int i = 0; i < n; i++) {
            cin >> ci;
            c.push_back(ci);
        }

        for (int i = 0; i < n; i++) {
            dfs(c[i], c[i], i + 1, 1, c[i]);
        }

        cout << res << "\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}

