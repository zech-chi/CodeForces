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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, a; cin >> n >> m >> a;
    ll x, y;
    x = (n / a) + 1 * (n % a != 0);
    y = (m / a) + 1 * (m % a != 0);
    cout << (x * y) << "\n";
}
