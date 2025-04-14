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

ll min(ll x, ll y) { return (x > y ? y : x); }
ll max(ll x, ll y) { return (x < y ? y : x); }

void solve()
{
    int n; cin >> n;
    vector<int> left(n);
    vector<int> right(n);
    for (int i = 0; i < n; i++) {
        cin >> left[i];
        right[i] = left[i];
    }
    
    for (int i = 1; i < n; i++) {
        left[i] += left[i - 1];
    }

    for (int i = n - 2; i >= 0; i--) {
        right[i] += right[i + 1];
    }
    if (n == 1) {
        cout << "1\n";
        return ;
    }

    int count = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0) sum = right[1];
        else if (i == n - 1) sum = left[n - 2];
        else sum = left[i - 1] + right[i + 1];

        if (sum % 2 == 0)
            count++;
    }

    cout << count << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

