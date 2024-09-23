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
    int res = 0;
    string s;
    while (n--) {
        cin >> s;
        if (s == "Tetrahedron")
            res += 4;
        else if (s == "Cube")
            res += 6;
        else if (s == "Octahedron")
            res += 8;
        else if (s == "Dodecahedron")
            res += 12;
        else if (s == "Icosahedron")
            res += 20;
    }
    cout << res << "\n";
}
