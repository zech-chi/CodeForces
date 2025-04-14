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
    float vp, vd, t, f, c;
    cin >> vp >> vd >> t >> f >> c;

    if (vp >= vd) {
        cout << "0\n";
        return;
    }

    float bijous = 0;
    float dp = t * vp;
    float dd = 0;
    float time_meet;



    
    while (dp < c) {
        time_meet = (dp - dd) / (vd - vp);
        dd += time_meet * vd;
        dp = dd;
        if (dp >= c)
            break;
        bijous++;
        dp += vp * (f + 2 * dd / vd);
    }

    cout << (int)bijous << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

