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
    int n, m, k; cin >> n >> m >> k;
    int a;
    int count = 0;
    while (n--) {
        cin >> a;
        if (a == 1) {
            if (m)
                m--;
            else
                count++;
        } else {
            if (k)
                k--;
            else if (m)
                m--;
            else
                count++;
        }
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

