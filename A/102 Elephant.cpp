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

int min(int x, int y) { return (x > y ? y : x); }
int max(int x, int y) { return (x < y ? y : x); }
int abs(int x) { return (x > 0 ? x : -x); }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x; cin >> x;
    int steps = 5;
    int moves = 0;

    while (x > 0) {
        moves += (x / steps);
        x = x % steps;
        steps--;
    }
    cout << moves << "\n";
    return (0);
}
