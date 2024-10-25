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
    string s1, s2, pile; cin >> s1 >> s2 >> pile;
    vector<int> char_counter(26, 0);
    for (int i = 0; i < pile.size(); i++) {
        char_counter[pile[i] - 'A']++;
    }
    for (int i = 0; i < s1.size(); i++) {
        char_counter[s1[i] - 'A']--;
        if (char_counter[s1[i] - 'A'] < 0) {
            cout << "NO\n";
            return ;
        }
    }
    for (int i = 0; i < s2.size(); i++) {
        char_counter[s2[i] - 'A']--;
        if (char_counter[s2[i] - 'A'] < 0) {
            cout << "NO\n";
            return ;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (char_counter[i] != 0) {
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

