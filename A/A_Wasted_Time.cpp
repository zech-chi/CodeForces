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

long double distance(long double x1, long double y1, long double x2, long double y2) {
    return (sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long double k; 
    cin >> n >> k;
    vector<pair<int, int> > v(n);
    int curx, cury;
    int prevx, prevy;
    long double dis = 0.0;
    for (int i = 0; i < n; i++) {
        cin >> curx >> cury;
        if (i > 0) {
            dis += distance(curx, cury, prevx, prevy);
        }
        prevx = curx;
        prevy = cury;
    }
    long double res = (k * dis) / 50.0000000;
    cout << fixed << setprecision(9) << res << "\n";
} 
