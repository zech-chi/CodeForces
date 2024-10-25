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

void solve()
{
    int n = 0; cin >> n;
    int a;
    int prev = 0;
    int count = 0;
    int maxi = 0;

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (i == 0 || a >= prev) {
            count++;
        } else {
            maxi = max(maxi, count);
            count = 1;
        }
        prev = a;
    }
    maxi = max(maxi, count);

    cout << maxi << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

