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
    ll n; cin >> n;
    vector<string> soroban;
    soroban.push_back("O-|-OOOO\n"); // 0
    soroban.push_back("O-|O-OOO\n"); // 1
    soroban.push_back("O-|OO-OO\n"); // 2
    soroban.push_back("O-|OOO-O\n"); // 3
    soroban.push_back("O-|OOOO-\n"); // 4
    soroban.push_back("-O|-OOOO\n"); // 5
    soroban.push_back("-O|O-OOO\n"); // 6
    soroban.push_back("-O|OO-OO\n"); // 7
    soroban.push_back("-O|OOO-O\n"); // 8
    soroban.push_back("-O|OOOO-\n"); // 9
    if (n == 0) {
        cout << soroban[0];
    }
    while (n) {
        cout << soroban[n % 10];
        n /= 10;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

