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

    int n, a; cin >> n;
    vector<int> lr(n), rl(n);

    for (int i = 0; i < n; i++) {
        cin >> a;
        lr[i] = a;
        rl[i] = a;
    }
    if (n == 1) {
        cout << "1\n";
        return (0);
    }
    sort(lr.begin(), lr.end());
    sort(rl.begin(), rl.end());
    for (int i = 1; i < n; i++) {
        lr[i] += lr[i - 1];
    }
    for (int i = n - 2; i >= 0; i--) {
        rl[i] += rl[i + 1];
    }
    int j = n - 1;
    int me, brother;
    while (j > 0) {
        me = rl[j];
        brother = lr[j - 1];
        if (me > brother)
            break;
        j--;
    }
    cout << n - j << "\n";
}
