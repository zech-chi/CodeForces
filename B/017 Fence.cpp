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


vector<ll> copy_vector(const vector<ll> &v) {
    vector<ll> vcopy(v.size());
    for (ll i = 0; i < v.size(); i++) {
        vcopy[i] = v[i];
    }
    return (vcopy);
}

void    sort_vector(vector<ll> &v) {
    sort(v.begin(), v.end());
}

vector<ll>   scan_vector(ll size) {
    vector<ll> v(size);
    for (ll i = 0; i < size; i++) {
        cin >> v[i];
    }
    return (v);
}

ll  get_sum_from_prefix_sum(const vector<ll> &v, ll left, ll right) {
    ll _sum = v[right];
    if (left > 0)
        _sum -= v[left - 1];
    return (_sum);
}

void    make_prefix_sum(vector<ll> &v) {
    for (ll i = 1; i < v.size(); i++) {
        v[i] += v[i - 1];
    }
}

ll  scane_var() {
    ll var; cin >> var;
    return (var);
}

void solve()
{
    ll n = scane_var();
    ll k = scane_var();
    vector<ll> v = scan_vector(n);
    make_prefix_sum(v);
    ll best, cur, j = -1;
    for (ll l = 0; l <= n - k; l++) {
        cur = get_sum_from_prefix_sum(v, l, l + k - 1);
        if (j == -1 || best > cur) {
            j = l + 1;
            best = cur;
        }
    }
    cout << j << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

