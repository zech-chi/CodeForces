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
    int mini, mini_index = -1;
    int maxi, maxi_index = -1;

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (mini_index == -1 || mini > a) {
            mini = a;
            mini_index = i;
        }
        if (maxi_index == -1 || maxi < a) {
            maxi = a;
            maxi_index = i;
        }
    }

    int max_distance = abs(maxi_index - mini_index);
    max_distance = max(max_distance, maxi_index);
    max_distance = max(max_distance, mini_index);
    max_distance = max(max_distance, abs(n - 1 - mini_index));
    max_distance = max(max_distance, abs(n - 1 - maxi_index));

    cout << max_distance << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

