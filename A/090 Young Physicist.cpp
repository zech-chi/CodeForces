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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int x, y, z;
    int xsum = 0, ysum = 0, zsum = 0;
    while (n--) {
        cin >> x >> y >> z;
        xsum += z; ysum += y; zsum += z;
    }
    if (!xsum && !ysum && !zsum)
        cout << "YES\n";
    else 
        cout << "NO\n";
    return (0);
}

