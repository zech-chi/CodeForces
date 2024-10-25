/*
* ███████╗███████╗ ██████╗██╗  ██╗       ██████╗██╗  ██╗██╗
* ╚══███╔╝██╔════╝██╔════╝██║  ██║      ██╔════╝██║  ██║██║
*   ███╔╝ █████╗  ██║     ███████║█████╗██║     ███████║██║
*  ███╔╝  ██╔══╝  ██║     ██╔══██║╚════╝██║     ██╔══██║██║
* ███████╗███████╗╚██████╗██║  ██║      ╚██████╗██║  ██║██║
* ╚══════╝╚══════╝ ╚═════╝╚═╝  ╚═╝       ╚═════╝╚═╝  ╚═╝╚═╝
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

void solve()
{
    int n, m; cin >> n >> m;
    vector<string> flag(n);
    for (int r = 0; r < n; r++) {
        cin >> flag[r];
    }
    for (int r = 0; r < n; r++) {
        char color = flag[r][0];
        for (int c = 1; c < m; c++) {
            if (flag[r][c] != color) {
                cout << "NO\n";
                return ;
            }
        }
        if (r > 0 && flag[r - 1][0] == color) {
            cout << "NO\n";
            return ;
        }
        if (r < n - 1 && flag[r + 1][0] == color) {
            cout << "NO\n";
            return ;
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

