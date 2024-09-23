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

    int n, m; cin >> n >> m;
    char color;
    bool colorful = false;
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            cin >> color;
            if (color == 'C' || color == 'M' || color == 'Y')
                colorful = true;
        }
    }
    if (colorful)
        cout << "#Color\n";
    else
        cout << "#Black&White\n";
}
