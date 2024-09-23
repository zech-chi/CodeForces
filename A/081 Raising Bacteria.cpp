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

int solve(int n) {
    if (n == 0)
        return (0);
    int i = 1;
    while (pow(2, i) <= n)
        i++;
    int remaining = n - pow(2, i - 1);
    return (1 + solve(remaining));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x; cin >> x;
    cout << solve(x) << "\n";
}

