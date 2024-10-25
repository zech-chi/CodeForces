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
    int a;
    int maxi, maxi_index = -1;
    int mini, mini_index = -1;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (maxi_index == -1 || maxi < a) {
            maxi_index = i;
            maxi = a;
        }
        if (mini_index == -1 || mini >= a) {
            mini_index = i;
            mini = a;
        }
    }

    if (maxi_index < mini_index) {
        cout << maxi_index + (n - 1 - mini_index) << "\n";
    } else {
        cout << maxi_index + (n - 2 - mini_index) << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

