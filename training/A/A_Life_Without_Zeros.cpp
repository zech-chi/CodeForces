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

ll removeZeros(ll x) {
    ll y = 0;
    ll level = 1;

    while (x) {
        if (x % 10) {
            y = (x % 10) * level + y;
            level *= 10;
        }
        x /= 10;
    }
    return (y);
}


void solve()
{
    ll a, b, c; cin >> a >> b; c = a + b;

    a = removeZeros(a);
    b = removeZeros(b);
    c = removeZeros(c);

    if (a + b == c) cout << "YES\n";
    else cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}
