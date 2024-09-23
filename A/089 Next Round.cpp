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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k; cin >> n >> k;
    int res = 0;
    vector<int> v(n);
    for (int &a: v) {
        cin >> a;
    }
    for (int i = 0; i < n; i++) {
        if (v[i] >= v[k - 1] && v[i] > 0)
            res++;
    }
    cout << res << "\n";
    return (0);
}

