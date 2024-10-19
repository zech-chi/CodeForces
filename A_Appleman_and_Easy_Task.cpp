/*
    zech-chi
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
    int n; cin >> n;
    vector<string> grid(n);
    int count;

    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            count = 0;
            
            if (r > 0 && grid[r - 1][c] == 'o') count++;
            if (c > 0 && grid[r][c - 1] == 'o') count++;
            if (r < n - 1 && grid[r + 1][c] == 'o') count++;
            if (c < n - 1 && grid[r][c + 1] == 'o') count++;

            if (count % 2) {
                cout << "NO\n";
                return ;
            }
        }
    }

    cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}
