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


void solve()
{
    int t; cin >> t;
    int times = 50;

    while (t--) {
        int n, a, b; cin >> n >> a >> b;
        int x = 0, y = 0;
        int i = -1;
        bool flag = false;
        string s; cin >> s;
        while (++i < times && !flag) {
            for (int j = 0; j < n; j++) {
                if (s[j] == 'N') y++;
                else if (s[j] == 'E') x++;
                else if (s[j] == 'S') y--;
                else x--;

                if (x == a && y == b) {
                    flag = true;
                    break;
                }
            }
        }

        if (flag) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

