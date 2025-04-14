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
#include <iomanip>
typedef long long ll;
using namespace std;
const double PI = 3.141592653589793;

int min(int a, int b) { return (a > b ? b: a); }
int abs(int x) { return (x > 0 ? x : -x);}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k; cin >> n >> k;
    int l, r, sum;
    for (int i = 0; i < n; i++) {
        cin >> l >> r;
        sum += abs(r - l + 1);
    }
    if (sum % k == 0) {
        cout << "0\n";
    } else {
        cout << (k - sum % k) << "\n";
    }
}

