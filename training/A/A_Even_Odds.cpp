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

    ll n, k; cin >> n >> k;
    ll x = n / 2 + (n % 2);
    if (x >= k)
        cout << (2 * (k - 1) + 1) << "\n";
    else
        cout << (2 * (k - x)) << "\n";
}
