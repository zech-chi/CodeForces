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
    int rows, cols; cin >> rows >> cols;
    vector<string> grid(rows);
    for (int r = 0; r < rows; r++) {
        cin >> grid[r];
    }
    int res = 0;
    for (int r = 0; r < rows; r++) {
        bool evil = false;
        for (int c = 0; c < cols; c++) {
            if (grid[r][c] == 'S') {
                evil = true;
                break;
            }
        }
        if (evil)
            continue;
        for (int c = 0; c < cols; c++) {
            grid[r][c] = 'v';
            res++;
        }
    }


    for (int c = 0; c < cols; c++) {
        bool evil = false;
        for (int r = 0; r < rows; r++) {
            if (grid[r][c] == 'S') {
                evil = true;
                break;
            }
        }
        if (evil)
            continue;
        for (int r = 0; r < rows; r++) {
            if (grid[r][c] != 'v') {
                grid[r][c] = 'v';
                res++;
            }
        }
    }

    cout << res << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

