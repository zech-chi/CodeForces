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
#include <map>
#include <iomanip>
typedef long long ll;
using namespace std;
#define abs(a) (((a) > 0) ? (a) : (-(a)))
#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) > (b)) ? (b) : (a))


int d(int n) {
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            count += 2;
            if (n / i == i)
                count--;
        }
    }
    return (count);
}


void solve()
{
    int a, b, c; cin >> a >> b >> c;
    map<int, int> dd;
    int div;
    long long res = 0;
    map<int, int>::iterator it;

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++) {
                it = dd.find(i * j * k);
                if (it == dd.end()) {
                    div = d(i * j * k);
                    dd[i * j * k] = div;
                } else {
                    div = it->second;
                }
                res += div;
                res %= 1073741824;
            }
        }
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

