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

int min(int x, int y) { return (x > y ? y : x); }
int max(int x, int y) { return (x < y ? y : x); }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin >> n >> m;
    bool left = false;
    char c;

    for (int r = 0; r < n; r++) {
        if (r % 2) {
            for (int c = 0; c < m; c++) {
                if ((c == 0 && left) || (c == m - 1 && !left)) {
                    cout << "#";
                } else {
                    cout << ".";
                }
            }
            left = !left;
        } else {
            for (int c = 0; c < m; c++)
                cout << "#";
        }
        cout << "\n";
    }
    return (0);
}
