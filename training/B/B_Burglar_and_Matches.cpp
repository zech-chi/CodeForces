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
using namespace std;

int min(int a, int b) {return (a > b ? b : a); }

bool compare(const pair<int, int>& a, const pair<int, int>& b) {return (a.first > b.first);}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin >> n >> m;
    vector<pair<int, int> > v(m);
    int a, b;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        v[i] = make_pair(b, a);
    }
    sort(v.begin(), v.end(), compare);
    int res = 0;
    int mn;
    int j = 0;
    while (n > 0 && j < v.size()) {
        mn = min(n, v[j].second);
        res += (mn * v[j].first);
        n -= mn;
        j++;
    }
    cout << res << "\n";
}
