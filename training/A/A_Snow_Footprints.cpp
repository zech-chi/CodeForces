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
#include <iomanip>
typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    string moves; cin >> moves;
    int li = -1, lf = -1;
    int ri = -1, rf = -1;

    for (int i = 0; i < moves.size(); i++) {
        if (moves[i] == 'L') {
            if (li == -1)
                li = i + 1;
            lf = i + 1;
        } else if (moves[i] == 'R') {
            if (ri == -1)
                ri = i + 1;
            rf = i + 1;
        }
    }
    if (ri == -1)
        cout << lf << " " << li - 1 << "\n";
    else if (li == -1)
        cout << ri << " " << rf + 1 << "\n";
    else
        cout << ri << " " << rf << "\n";
}

