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

    string s1, s2; cin >> s1 >> s2;

    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i])
            cout << "1";
        else
            cout << "0";
    }
    cout << "\n";
    return (0);
}
