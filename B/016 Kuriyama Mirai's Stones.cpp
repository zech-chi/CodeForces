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

int min(int x, int y) { return (x > y ? y : x); }
int max(int x, int y) { return (x < y ? y : x); }
int abs(int x) { return (x > 0 ? x : -x); }


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
    vector<ll> v1 = scan_vector(n);
    vector<ll> v2 = copy_vector(v1);
    sort_vector(v2);
    make_prefix_sum(v1);
    make_prefix_sum(v2);
    ll m = scane_var();
    ll type, left, right;
    while (m--) {
        cin >> type >> left >> right;
        if (type == 1)
            cout << get_sum_from_prefix_sum(v1, --left, --right);
        else
            cout << get_sum_from_prefix_sum(v2, --left, --right);
        cout << "\n";
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

