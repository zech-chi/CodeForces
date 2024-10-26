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


int sum(int n) {
    return ((n * (n + 1)) / 2);
}

void solve()
{
    int n; cin >> n;
    vector<int> rows(n, -1), cols(n, -1);
    string line;
    int res = 0;
    int r, c;

    for (r = 0; r < n; r++) {
        cin >> line;
        for (c = 0; c < n; c++) {
            if (line[c] == 'C') {
                rows[r]++;
                cols[c]++;
            }
        }
    }

    for (r = 0; r < n; r++) {
        res += sum(rows[r]) + sum(cols[r]);
    }

    cout << res << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

