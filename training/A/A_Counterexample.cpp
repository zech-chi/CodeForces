#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <iterator>
#include <set>
#include <vector>
#include <numeric>
typedef long long ll;
using namespace std;

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll l, r; cin >> l >> r;
    for (ll x = l; x <= r - 2; x++) {
        for (ll y = x + 1; y <= r - 1; y++) {
            if (gcd(x, y) == 1) {
                for (ll z = y + 1; z <= r; z++) {
                    if (gcd(x, z) != 1 && gcd(y, z) == 1) {
                        cout << x << " " << y << " " << z << "\n";
                        return (0);
                    }
                }
            }
        }
    }
    cout << "-1\n";
    return (0);
}
