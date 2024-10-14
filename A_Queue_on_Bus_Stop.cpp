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
    int i, a;
    int res = 0, bus = m;
    for (i = 0; i < n; i++) {
        cin >> a;
        if (bus - a >= 0)
            bus -= a;
        else {
            res++;
            bus = m - a;
        }
    }

    cout << res + 1 << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

