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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> v(n);

    for (int &a: v) {
        cin >> a;
    }

    int res = v[0];
    int energy = 0;
    int diff;
    for (int i = 1; i < n; i++) {
        diff = v[i - 1] + energy - v[i];
        if (diff < 0) {
            res -= diff;
            energy = 0;
        } else {
            energy = diff;
        }
    }
    cout << res << "\n";
}
