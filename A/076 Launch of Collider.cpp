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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    string s; cin >> s;
    vector<int> v(n);
    for (int &a: v) {
        cin >> a;
    }
    int res = -1, distance;
    for (int i = 1; i < n; i++) {
        if (s[i] == 'L' && s[i - 1] == 'R') {
            distance = (v[i] - v[i - 1]) / 2;
            if (res == -1)
                res = distance;
            else
                res = min(res, distance);
        }
    }
    cout << res << "\n";
}

