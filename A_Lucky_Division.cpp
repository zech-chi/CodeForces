/*
    zech-chi
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


bool isLucky(int x) {
    while (x) {
        if (x % 10 != 7 && x % 10 != 4)
            return (false);
        x /= 10;
    }
    return (true);
}

void solve()
{
    int n; cin >> n;

    for (int i = n; i >= 4; i--) {
        if (n % i == 0 && isLucky(i)) {
            cout << "YES\n";
            return ;
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

