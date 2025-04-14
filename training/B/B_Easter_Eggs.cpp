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
    vector<int> v(n, 0);
    string colors = "ROYGBIV";
    vector<char> ans(n - n % 7);
    for (int i = 0; i < 7; i++) {
        v[i] = n / 7;
    }

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < v[i]; j++) {
            ans[j * 7 + i] = colors[i];
        }
    }

    for (int i = 0; i < n - n % 7; i++) {
        cout << ans[i];
    }

    int i;
    if (n % 7 == 6 || n % 7 == 5)
        i = 1;
    else
        i = 3;
    for (int j = 0; j < n % 7; j++) {
        cout << colors[i++];
    }
    cout << "\n";
}
