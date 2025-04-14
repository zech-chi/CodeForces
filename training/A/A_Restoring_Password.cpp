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
    string s; cin >> s;
    vector<string> vs(10), vv(10);
    for (int i = 0; i < 10; i++) {
        cin >> vv[i];
    }
    for (int i = 0; i < 8; i++) {
        vs[i] = s.substr(i * 10, 10);
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 10; j++) {
            if (vs[i] == vv[j]) {
                cout << j;
                break;
            }
        }
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

