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
    int n; cin >> n;
    bool    even = (n % 2);
    int count = 0;
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            if ((!(c % 2) && even) || (c % 2 && !even))
                count++;
        }
        even = !even;
    }
    even = (n % 2);
    cout << count << "\n";
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            if ((!(c % 2) && even) || (c % 2 && !even))
                cout << "C";
            else
                cout << ".";
        }
        even = !even;
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

