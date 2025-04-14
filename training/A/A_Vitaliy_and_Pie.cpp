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
    string s; cin >> s;
    vector<int> alpha(26, 0);
    int ans = 0;

    for (int i = 0; i < 2 * n - 2; i++) {
        if (i % 2) {
            if (alpha[s[i] - 'A'] == 0) {
                ans++;
            } else {
                alpha[s[i] - 'A']--;
            }
        } else {
            alpha[s[i] - 'a']++;
        }
    }

    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

