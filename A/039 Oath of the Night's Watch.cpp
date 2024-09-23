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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> v(n);

    for (int &a: v) {
        cin >> a;
    }

    sort(v.begin(), v.end());
    int res = 0;
    for (int i = 1; i < n - 1; i++) {
        if (v[0] < v[i] && v[i] < v[n - 1])
            res++;
    }
    cout << res << "\n";
}
