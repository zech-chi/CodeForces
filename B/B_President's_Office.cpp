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

ll min(ll x, ll y) { return (x > y ? y : x); }
ll max(ll x, ll y) { return (x < y ? y : x); }

void solve()
{
    int n, m; cin >> n >> m;
    char president; cin >> president;
    vector<string> office(n);
    vector<pair<int, int> > directions;
    directions.push_back(make_pair(-1, 0));
    directions.push_back(make_pair(1, 0));
    directions.push_back(make_pair(0, -1));
    directions.push_back(make_pair(0, 1));
    for (int r = 0; r < n; r++) {
        cin >> office[r];
    }
    set<char> visited;
    visited.insert('.');
    visited.insert(president);
    int res = 0;
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            if (office[r][c] == president) {
                for (int i = 0; i < 4; i++) {
                    int nr = r + directions[i].first;
                    int nc = c + directions[i].second;
                    if (nr < 0 || nr >= n || nc < 0 || nc >= m)
                        continue;
                    // cout << office[nr][nc] << " ";
                    if (visited.find(office[nr][nc]) == visited.end()) {
                        res++;
                        visited.insert(office[nr][nc]);
                    }
                }
                // cout << endl;
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
