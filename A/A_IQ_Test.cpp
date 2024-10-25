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
int abs(int x) { return (x > 0 ? x : -x);}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> matrix(4);
    for (string &row: matrix) {
        cin >> row;
    }
    int res = -1, white, black;
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            white = 0;
            white += (matrix[r][c] == '.' ? 1: 0);
            white += (matrix[r][c + 1] == '.' ? 1: 0);
            white += (matrix[r + 1][c] == '.' ? 1: 0);
            white += (matrix[r + 1][c + 1] == '.' ? 1: 0);

            black = 0;
            black += (matrix[r][c] == '#' ? 1: 0);
            black += (matrix[r][c + 1] == '#' ? 1: 0);
            black += (matrix[r + 1][c] == '#' ? 1: 0);
            black += (matrix[r + 1][c + 1] == '#' ? 1: 0);

            res = max(res, max(white, black));
        }
    }

    if (res > 2) cout << "YES\n";
    else cout << "NO\n";
}

