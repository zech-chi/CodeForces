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
#include <map>
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
    int x, y;
    set<int> st;
    int danger = 1;
    set<int>::iterator itx, ity;

    while (m > 0) {
        cin >> x >> y;
        if (st.begin() == st.end()) {
            danger *= 2;
            st.insert(x);
            st.insert(y);
            continue;
        }
        itx = st.find(x);
        ity = st.find(y);

        if (itx == st.end()) {
            st.insert(x);
            danger *= 2;
        }
        
        if (ity == st.end()) {
            st.insert(y);
            danger *= 2;
        }
        m--;
    }
    
    cout << danger << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

