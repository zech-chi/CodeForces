/*
* ███████╗███████╗ ██████╗██╗  ██╗       ██████╗██╗  ██╗██╗
* ╚══███╔╝██╔════╝██╔════╝██║  ██║      ██╔════╝██║  ██║██║
*   ███╔╝ █████╗  ██║     ███████║█████╗██║     ███████║██║
*  ███╔╝  ██╔══╝  ██║     ██╔══██║╚════╝██║     ██╔══██║██║
* ███████╗███████╗╚██████╗██║  ██║      ╚██████╗██║  ██║██║
* ╚══════╝╚══════╝ ╚═════╝╚═╝  ╚═╝       ╚═════╝╚═╝  ╚═╝╚═╝
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
    vector<vector<int> > lights(3, vector<int>(3, 1));

    int a;
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            cin >> a;
            if (a % 2) {
                lights[r][c] = !lights[r][c];
                if (r + 1 < 3)
                    lights[r + 1][c] = !lights[r + 1][c];
                if (c + 1 < 3)
                    lights[r][c + 1] = !lights[r][c + 1];
                if (r - 1 >= 0)
                    lights[r - 1][c] = !lights[r - 1][c];
                if (c - 1 >= 0)
                    lights[r][c - 1] = !lights[r][c - 1];
            }
        }
    }

    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            cout << lights[r][c];
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

