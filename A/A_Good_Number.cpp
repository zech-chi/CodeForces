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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, a; cin >> n >> k;
    bool good_number;
    int res = 0;
    while (n--) {
        vector<int> digits(k + 1, 0);
        cin >> a;
        if (k == 0 && a == 0) {
            res++;
            continue;
        }
        while (a) {
            if (a % 10 <= k)
                digits[a % 10] = 1;
            a /= 10;
        }
        good_number = true;
        for (int i = 0; i <= k; i++) {
            if (digits[i] == 0) {
                good_number = false;
                break;
            }
        }
        if (good_number)
            res++;
    }
    cout << res << "\n";
}

