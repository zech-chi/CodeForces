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

    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2;
    cin >> c1 >> c2;
    cin >> d1 >> d2;

    for (int a = 1; a <= 9; a++) {
        for (int b = 1; b <= 9; b++) {
            for (int c = 1; c <= 9; c++) {
                for (int d = 1; d <= 9; d++) {
                    if (a == b ||
                        a == c ||
                        a == d ||
                        b == c ||
                        b == d ||
                        c == d)
                        continue;
                    if (a + b == r1 &&
                        c + d == r2 &&
                        a + c == c1 &&
                        b + d == c2 &&
                        a + d == d1 &&
                        c + b == d2
                    ) {
                        cout << a << " " << b << "\n";
                        cout << c << " " << d << "\n";
                        return (0);
                    }
                }
            }
        }
    }
    cout << "-1\n";
}

