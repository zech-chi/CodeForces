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

    int n; cin >> n;
    int chest = 0, biceps = 0, back = 0;
    int workout;

    for (int day = 0; day < n; day++) {
        cin >> workout;
        if (day % 3 == 0) (chest += workout);
        else if (day % 3 == 1) (biceps += workout);
        else (back += workout);
    }

    if (chest > biceps && chest > back) (cout << "chest\n");
    else if (biceps > chest && biceps > back) (cout << "biceps\n");
    else (cout << "back\n");
    return (0);
}
