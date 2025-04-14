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
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int t = s.find('T');
    int g = s.find('G');

    if (g < t) {
        for (int i = g + k; i < n; i += k) {
            if (s[i] == 'T') {
                cout << "YES\n";
                return ;
            } else if (s[i] == '#') {
                cout << "NO\n";
                return ;
            }
        }
    } else {
        for (int i = g - k; i >= 0; i -= k) {
            if (s[i] == 'T') {
                cout << "YES\n";
                return ;
            } else if (s[i] == '#') {
                cout << "NO\n";
                return ;
            }
        }
    }

    cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

