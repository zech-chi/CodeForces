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
typedef long long ll;
using namespace std;

int max(int a, int b) { return (a > b ? a : b);}
int min(int a, int b) { return (a < b ? a : b);}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin >> n;
    vector<ll> arr(n), left(n + 1, 0), right(n + 1, 0);
    for (ll &a: arr) {
        cin >> a;
    }
    ll moves = 1;
    for (ll i = 0; i < n; i++) {
        left[arr[i]] = moves++;
    }
    moves = 1;
    for (ll i = n - 1; i >= 0; i--) {
        right[arr[i]] = moves++;
    }
    ll vasya = 0, petya = 0;
    ll m, a; cin >> m;
    for (ll i = 0; i < m; i++) {
        cin >> a;
        vasya += left[a];
        petya += right[a];
    }
    cout << vasya << " " << petya << '\n';
}
