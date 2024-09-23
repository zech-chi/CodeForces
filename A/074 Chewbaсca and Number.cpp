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

ll min(ll x, ll y) { return (x > y ? y : x); }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll  n; cin >> n;
    vector<ll> v;
    while (n) {
        v.push_back(n % 10);
        n /= 10;
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        if (i == 0 && v[i] == 9)
            cout << "9";
        else
            cout << min(v[i], 9 - v[i]);
    }
    cout << "\n";
}

