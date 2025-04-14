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
int max(int x, int y) { return (x < y ? y : x); }
int abs(int x) { return (x > 0 ? x : -x); }


void print(char c, int n_time) {
    for (int i = 0; i < n_time; i++)
        cout << c;
}

void solve()
{
    int k, n, w; cin >> k >> n >> w;

    for (int i = 1; i <= w; i++) {
        n -= i * k;
    }
    if (n >= 0) (cout << "0\n");
    else (cout << abs(n) << "\n");

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}
