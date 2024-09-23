/*
* ███████╗███████╗ ██████╗██╗  ██╗       ██████╗██╗  ██╗██╗
* ╚══███╔╝██╔════╝██╔════╝██║  ██║      ██╔════╝██║  ██║██║
*   ███╔╝ █████╗  ██║     ███████║█████╗██║     ███████║██║
*  ███╔╝  ██╔══╝  ██║     ██╔══██║╚════╝██║     ██╔══██║██║
* ███████╗███████╗╚██████╗██║  ██║      ╚██████╗██║  ██║██║
* ╚══════╝╚══════╝ ╚═════╝╚═╝  ╚═╝       ╚═════╝╚═╝  ╚═╝╚═╝
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

ll min(ll x, ll y) { return (x > y ? y : x); }
ll max(ll x, ll y) { return (x < y ? y : x); }

bool    isSorted(const vector<ll> &v) {
    if (v.size() < 2)
        return (true);
    for (ll i = 1; i < v.size(); i++) {
        if (v[i] < v[i - 1])
            return (false);
    }
    return (true);
}

void solve()
{
    ll n; cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    if (n == 1 || isSorted(v)) {
        cout << "yes" << endl;
        cout << "1 1\n";
        return;
    }
    vector<ll> v1(n - 1, 0);
    for (ll i = 1; i < n; i++) {
        if (v[i] > v[i - 1]) {
            v1[i - 1] = 1;
        }
    }
    bool found_zero = false;
    ll  first_zero = -1;
    ll  last_zero = -1;
    for (int i = 0; i < n - 1; i++) {
        if (v1[i] == 0) {
            if (!found_zero) {
                found_zero = true;
                first_zero = i;
            }
            last_zero = i;
        }
        // cout << v1[i] << " ";
    }
    if (!found_zero) {
        cout << "no\n";
        return;
    }
    ll l = first_zero;
    ll r = last_zero + 1;
    while (l < r) {
        ll temp = v[l];
        v[l] = v[r];
        v[r] = temp;
        l++;
        r--;
    }
    if (isSorted(v)) {
        cout << "yes\n";
        cout << first_zero + 1 << " " << last_zero + 2 << "\n";
    } else {
        cout << "no\n";
    }
    // cout << "\n";
    // cout << "found_zero = " << found_zero << ", first_zero = " << first_zero;
    // cout << ", last_zero = " << last_zero << endl;
    // for (int i = 0; i < n; i++) {
    //     cout << v[i] << " ";
    // }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

