#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <set>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int m;
    cin >> m;
    int r, c;
    int left, right;
    for (int i = 0; i < m; i++) {
        cin >> r >> c;
        r--;
        c--;
        left = c;
        right = v[r] - c - 1;
        if (r > 0)
            v[r - 1] += left;
        if (r < n - 1)
            v[r + 1] += right;
        v[r] = 0;
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << "\n";
    }
}
