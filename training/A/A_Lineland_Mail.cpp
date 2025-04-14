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

int abs(int x) {
    return (x > 0 ? x : -x);
}

int max(int x, int y) {
    return (x > y ? x : y);
}

int min(int x, int y) {
    return (x < y ? x : y);
}

int distance(int x1, int x2) {
    return (abs(x1 - x2));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> v(n);
    for (int &a : v) {
        cin >> a;
    }

    for (int i = 0; i < n; i++) {
        if (i == 0)
            cout << distance(v[i], v[i + 1])  << " " << distance(v[0], v[n - 1]) << "\n";
        else if (i == n - 1)
            cout << distance(v[i], v[i - 1])  << " " << distance(v[0], v[n - 1]) << "\n";
        else
            cout << min(distance(v[i], v[i - 1]), distance(v[i], v[i + 1]))  \
            << " " << max(distance(v[i], v[0]), distance(v[i], v[n - 1])) << "\n";
    }
}
