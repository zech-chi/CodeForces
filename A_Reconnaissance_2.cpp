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
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int s1, s2;
    int mini = -1;

    for (int i = 1; i < n; i++) {
        if ((mini == -1) || (mini > abs(v[i] - v[i - 1]))) {
            s1 = i;
            s2 = i + 1;
            mini = abs(v[i] - v[i - 1]);
        }
    }

    if (mini > abs(v[0] - v[n - 1])) {
        s1 = 1;
        s2 = n;
    }

    cout << s1 << " " << s2 << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

