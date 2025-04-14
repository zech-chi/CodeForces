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


void solve()
{
    int n; cin >> n;
    vector<int> digits(10);
    digits[0] = 2;
    digits[1] = 7;
    digits[2] = 2;
    digits[3] = 3;
    digits[4] = 3;
    digits[5] = 4;
    digits[6] = 2;
    digits[7] = 5;
    digits[8] = 1;
    digits[9] = 2;

    cout << digits[n / 10] * digits[n % 10] << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}
