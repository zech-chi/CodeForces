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
    int n, m; cin >> n >> m;
    vector<string > letter(n);

    for (int r = 0; r < n; r++) {
        cin >> letter[r];
    }

    int minR = -1, maxR = -1;
    int minC = -1, maxC = -1;

    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            if (letter[r][c] == '*') {
                if (minR == -1)
                    minR = r;
                else
                    minR = min(minR, r);

                if (minC == -1)
                    minC = c;
                else
                    minC = min(minC, c);

                if (maxR == -1)
                    maxR = r;
                else
                    maxR = max(maxR, r);

                if (maxC == -1)
                    maxC = c;
                else
                    maxC = max(maxC, c);
            }
        }
    }


    for (int r = minR; r <= maxR; r++) {
        for (int c = minC; c <= maxC; c++) {
            cout << letter[r][c];
        }
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

