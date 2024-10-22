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


void solve()
{
    ll n; cin >> n;
    vector<pair<ll, ll> > neg, pos;
    ll x, a, i;

    for (i = 0; i < n; i++) {
        cin >> x >> a;
        if (x < 0) neg.push_back(make_pair(x, a));
        else pos.push_back(make_pair(x, a));
    }

    sort(neg.begin(), neg.end(), [](const pair<ll, ll> &p1, const pair<ll, ll> &p2) {
        return (p1.first > p2.first);
    });
    sort(pos.begin(), pos.end(), [](const pair<ll, ll> &p1, const pair<ll, ll> &p2) {
        return (p1.first < p2.first);
    });

    ll size = min(neg.size(), pos.size());
    ll res = 0;

    for (i = 0; i < size; i++) {
        res += pos[i].second + neg[i].second;
    }

    if (neg.size() > size) res += neg[size].second;
    else if (pos.size() > size) res += pos[size].second;

    cout << res << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}
