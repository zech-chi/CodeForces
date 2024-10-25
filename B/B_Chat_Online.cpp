#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <iterator>
#include <set>
#include <vector>
#include <numeric>
using namespace std;
 
int min(int x1, int x2, int x3, int x4) {
    int mn = x1;
    if (x2 < mn)
        mn = x2;
    if (x3 < mn)
        mn = x3;
    if (x4 < mn)
        mn = x4;
    return (mn);
}
 
int max(int x1, int x2, int x3, int x4) {
    int mx = x1;
    if (x2 > mx)
        mx = x2;
    if (x3 > mx)
        mx = x3;
    if (x4 > mx)
        mx = x4;
    return (mx);
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int p, q, l, r; cin >> p >> q >> l >> r;
    int a, b, c, d;
    int x1, x2, x3, x4;
    static int tab[1000 + 1];
    vector<pair<int, int> > Z_schedule(p), v;
 
    for (int i = 0; i < p; i++) {
        cin >> a >> b;
        Z_schedule[i] = make_pair(a, b);
    }
 
    for (int i = 0; i < q; i++) {
        cin >> c >> d;
        for (int j = 0; j < p; j++) {
            if (c > Z_schedule[j].second)
                continue;
            x1 = Z_schedule[j].first - c;
            x2 = Z_schedule[j].first - d;
            x3 = Z_schedule[j].second - c;
            x4 = Z_schedule[j].second - d;
            v.push_back(make_pair(min(x1, x2, x3, x4), max(x1, x2, x3, x4)));
        }
    }
 
    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i].first << ", " << v[i].second << "\n";
    // }
 
    int res = 0;
    for (int t = l; t <= r; t++) {
        for (int i = 0; i < v.size(); i++) {
            if (v[i].first <= t && t <= v[i].second) {
                res++;
                break;
            }
        }
    }
    cout << res << "\n";
}
