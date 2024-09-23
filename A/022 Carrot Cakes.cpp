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

    int n, t, k, d; cin >> n >> t >> k >> d;
    int t1, t2;

    if (k >= n) {
        cout << "NO\n";
    } else {
        t1 = (n / k + 1 * (n % k != 0)) * t;
        t2 = d + t;
        // cout << "t1 = " << t1 << ", t2 = " << t2 << "\n";
        if (t1 <= t2)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}
