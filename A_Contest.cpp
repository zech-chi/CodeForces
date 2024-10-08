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

void solve()
{
    int a, b, c, d; cin >> a >> b >> c >> d;

    double misha = max(1.0 * a * 4 / 10.0, a * 1.0 - 1.0 * a * c / 250.0);
    double vasya = max(1.0 * b * 4 / 10.0, b * 1.0 - 1.0 * b * d / 250.0);

    if (misha < vasya)
        cout << "Vasya\n";
    else if (misha > vasya)
        cout << "Misha\n";
    else
        cout << "Tie\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

