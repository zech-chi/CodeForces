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

    int t; cin >> t;
    float a;
    float n;
    while (t--) {
        cin >> a;
        n = (360) / (180 - a);
        if (floor(n) == ceil(n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
} 