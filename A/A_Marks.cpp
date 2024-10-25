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


void solve()
{
    int n, m; cin >> n >> m;
    vector<string> grid(n);
    vector<int> maximus(m);
    int maxi;
    int res = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    for (int c = 0; c < m; c++) {
        maxi = 0;
        for (int r = 0; r < n; r++) {
            maxi = max(maxi, grid[r][c] - '0');
        }
        maximus[c] = maxi;
    }

    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            if (grid[r][c] - '0' == maximus[c]) {
                res++;
                break;
            }
        }
    }

    cout << res << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

