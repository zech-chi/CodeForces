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

int min(int x, int y) { return (x > y ? y : x); }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l, r, a; cin >> l >> r >> a;
    while (a > 0) {
        if (l > r) {
            r++;
            a--;
        } else if (l < r) {
            l++;
            a--;
        } else {
            l += a / 2;
            r += a / 2;
            break;
        }
    }
    cout << 2 * min(l, r) << "\n";
    
    return (0);
}

