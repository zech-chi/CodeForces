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



void    help(vector<pair<int, string> > &ship, int order) {
    for (int i = 0; i < ship.size(); i++) {
        if (ship[i].first == order) {
            cout << ship[i].second << "\n";
            ship[i].first = -1;
        }
    }
}


void solve()
{
    int n; cin >> n;
    vector<pair<int, string> > ship(n);
    string name, type;

    for (int i = 0; i < n; i++) {
        cin >> name >> type;
        if (type == "rat")
            ship[i] = make_pair(1, name);
        else if (type == "woman" || type == "child")
            ship[i] = make_pair(2, name);
        else if (type == "man")
            ship[i] = make_pair(3, name);
        else if (type == "captain")
            ship[i] = make_pair(4, name);
    }

    help(ship, 1);
    help(ship, 2);
    help(ship, 3);
    help(ship, 4);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

