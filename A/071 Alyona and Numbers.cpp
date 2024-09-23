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
#include <iomanip>
typedef long long ll;
using namespace std;
const double PI = 3.141592653589793;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m = 0; cin >> n >> m;
    ll div, mod, i;
    div = n / 5;
    mod = n % 5;
    vector<ll> xmodulo(5, div);
    i = 0;
    while (mod) {
        xmodulo[i]++;
        i++;
        mod--;
    }

    div = m / 5;
    mod = m % 5;
    vector<ll> ymodulo(5, div);
    i = 0;
    while (mod) {
        ymodulo[i]++;
        i++;
        mod--;
    }

    ll counter = xmodulo[4] * ymodulo[4];
    ll l = 0, r = 3;

    while (l < 4 && r >= 0) {
        counter += xmodulo[l++] * ymodulo[r--];
    }
    cout << counter << "\n";
    // cout << n << ": ";
    // for (int i = 0; i < 5; i++) cout << xmodulo[i] << " ";
    // cout << "\n";
    // cout << m << ": ";
    // for (int i = 0; i < 5; i++) cout << ymodulo[i] << " ";
    // cout << "\n";

}

