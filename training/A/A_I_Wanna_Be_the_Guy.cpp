#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <iterator>
#include <set>
#include <vector>
#include <numeric>
typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> levels(n, 0);
    int X, p;
    int Y, q;
    cin >> X;
    while (X--) {
        cin >> p;
        p--;
        levels[p] = 1;
    }
    cin >> Y;
    while (Y--) {
        cin >> q;
        q--;
        levels[q] = 1;
    }
    bool passed = true;
    for (int i = 0; i < n; i++) {
        if (!levels[i]) {
            passed = false;
            break;
        }
    }
    if (passed) cout << "I become the guy.\n";
    else cout << "Oh, my keyboard!\n";
}
