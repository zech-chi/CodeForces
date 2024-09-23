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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b; cin >> a >> b;
    cout << min(a, b) << " " << ((max(a, b) - min(a, b)) / 2) << "\n";
    return (0);
}
