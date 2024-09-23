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
    int x = 0;
    string s;
    while (n--) {
        cin >> s;
        if (s == "++X" || s == "X++")
            x++;
        else
            x--;
    }
    cout << x << "\n";
    return (0);
}

