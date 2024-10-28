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
#define abs(a) (((a) > 0) ? (a) : (-(a)))
#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) > (b)) ? (b) : (a))


void solve()
{
    int n, m; cin >> n >> m;
    int s, g;
    set<int> st;
    bool flag = false;
    string line;

    for (int i = 0; i < n; i++) {
        cin >> line;
        s = line.find('S');
        g = line.find('G');
        if (s < g)
            flag = true;
        st.insert(s - g);
    }

    if (flag) cout << "-1\n";
    else cout << st.size() << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

