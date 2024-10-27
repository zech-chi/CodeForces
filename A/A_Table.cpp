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
    int r, c;
    int cell;
    vector<int> rows, cols;

    for (r = 0; r < n; r++) {
        for (c = 0; c < m; c++) {
            cin >> cell;
            if (cell == 1) {
                rows.push_back(r);
                cols.push_back(c);
            }
        }
    }

    bool flag = false;

    for (int i = 0; i < rows.size(); i++) {
        if (rows[i] == 0 || rows[i] == n - 1 || cols[i] == 0 || cols[i] == m - 1) {
            flag = true;
            break;
        }
    }

    if (flag)
        cout << "2\n";
    else
        cout << "4\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

