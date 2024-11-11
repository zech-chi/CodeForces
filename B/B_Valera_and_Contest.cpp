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
#include <map>
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
    int n, k, l, r, s_all, s_k;
    cin >> n >> k >> l >> r >> s_all >> s_k;

    int rem;
    int x;
    int i;

    rem = s_k % k;
    for (i = 0; i < k; i++) {
        x = (s_k / k) + (rem > 0);
        cout << x << " ";
        rem--;
    }
    if (s_all == s_k) {
        cout << "\n";
        return ;
    }

    s_all -= s_k;
    rem = s_all % (n - k);
    for (i = k; i < n; i++) {
        x = (s_all / (n - k)) + (rem > 0);
        cout << x << " ";
        rem--;
    }

    cout << "\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

