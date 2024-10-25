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
    int a, b; cin >> a >> b;
    int counter = 0;

    while ((a > 0 && b > 0) && (a > 1 || b > 1)) {
        if (a > b) {
            a -= 2;
            b += 1;
        } else {
            a += 1;
            b -= 2;
        }
        counter++;
    }

    cout << counter << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}
