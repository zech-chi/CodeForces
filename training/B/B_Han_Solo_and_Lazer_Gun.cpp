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
    int n;
    double x0, y0;
    double x, y;
    double a, b;
    set<pair<double, double> > lines;
    bool flag = false;

    cin >> n >> x0 >> y0;
    while (n--) {
        cin >> x >> y;
        if (x == x0) {
            flag = true;
            continue;
        }
        a = (y - y0) / (x - x0);
        b = y0 - a * x0;
        if (lines.find(make_pair(a, b)) == lines.end())
            lines.insert(make_pair(a, b));
    }

    cout << lines.size() + (1 * flag) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

