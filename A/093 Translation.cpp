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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2; cin >> s1 >> s2;
    if (s1.size() != s2.size()) {
        cout << "NO\n";
        return (0);
    }
    int l = 0, r = s2.size() - 1;
    while (l < s1.size() && r >= 0) {
        if (s1[l] != s2[r]) {
            cout << "NO\n";
            return (0);
        }
        l++;
        r--;
    }
    cout << "YES\n";
    return (0);
}

