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

    int n, a; cin >> n;
    vector<int> tab(1001, 0);
    for (int i = 0; i < n; i++) {
        cin >> a;
        tab[a]++;
    }

    for (int i = 0; i < 1001; i++) {
        if (tab[i] > n / 2 + (n % 2)) {
            cout << "NO\n";
            return (0);
        }
    }
    cout << "YES\n";
    return (0);
}

