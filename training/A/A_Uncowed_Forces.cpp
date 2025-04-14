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
    vector<int> m(5), w(5);

    for (int i = 0; i < 5; i++) cin >> m[i];
    for (int i = 0; i < 5; i++) cin >> w[i];
    int hs, hu; cin >> hs >> hu;
    int x;
    double score = 0;

    for (int i = 0; i < 5; i++) {
        x = (i + 1) * 500;
        score += max(0.3 * x, (1 * 1.0 - 1.0 * m[i] / 250) * x - 50.0 * w[i]);
    }

    score += hs * 100.0 - hu * 50.0;
    cout << score << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

