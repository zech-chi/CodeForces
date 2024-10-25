/*
*   zech-chi
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

int getMaxDiff(vector<int> &v) {
    int maxi = 0;

    for (int i = 1; i < v.size(); i++) {
        maxi = max(maxi, v[i] - v[i - 1]);
    }

    return (maxi);
}

void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    vector<int> vcopy;
    int res = 1000;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 1; i < n - 1; i++) {
        vcopy = v;
        vcopy.erase(vcopy.begin() + i);
        res = min(res, getMaxDiff(vcopy));
    }

    cout << res << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

