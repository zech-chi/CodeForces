/*
*   zech-chi
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
    int k; cin >> k;
    vector<int> tab(10, 0);
    string s;
    for (int i = 0; i < 4; i++) {
        cin >> s;
        for (int j = 0; j < 4; j++) {
            if (s[j] != '.')
                tab[s[j] - '0']++;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (2 * k < tab[i]) {
            cout << "NO\n";
            return ;
        }
    }
    
    cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

