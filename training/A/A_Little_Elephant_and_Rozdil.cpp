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
#define abs(a) (((a) > 0) ? (a) : (-(a)))
#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) > (b)) ? (b) : (a))


void solve()
{
    int n; cin >> n;
    int city;
    int bestCity = -1, bestCityIndex, count = 0;

    for (int i = 1; i <= n; i++) {
        cin >> city;
        if (bestCity == -1 || bestCity > city) {
            bestCity = city;
            count = 0;
        }
        if (bestCity == city) {
            bestCityIndex = i;
            count++;
        }
    }

    if (count > 1) cout << "Still Rozdil\n";
    else cout << bestCityIndex << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

