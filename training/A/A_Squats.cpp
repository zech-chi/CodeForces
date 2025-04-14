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
    string s; cin >> s;
    int down = 0, up = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'x')
            down++;
    }
    up = n - down;
    if (up == down) {
        cout << "0\n";
        cout << s << "\n";
        return ;
    }
    int i = -1;
    int changes = 0;
    while (++i < s.size() && up != down) {
        if (up > down && s[i] == 'X') {
            s[i] = 'x';
            up--;
            down++;
            changes++;
        } else if (down > up && s[i] == 'x') {
            s[i] = 'X';
            up++;
            down--;
            changes++;
        }
    }
    
    cout << changes << "\n";
    cout << s << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

