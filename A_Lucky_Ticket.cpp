/*
*   zech-chi
*/
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
#define abs(a) (((a) > 0) ? (a) : (-(a)))
#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) > (b)) ? (b) : (a))


void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    int leftSum = 0, rightSum = 0;
    bool isLucky = true;

    for (int i = 0; i < n / 2; i++) {
        if (s[i] != '7' && s[i] != '4') {
            cout << "NO\n";
            return ;
        }
        leftSum += s[i] - '0';
    }

    for (int i = n / 2; i < n; i++) {
        if (s[i] != '7' && s[i] != '4') {
            cout << "NO\n";
            return ;
        }
        rightSum += s[i] - '0';
    }

    cout << (leftSum == rightSum ? "YES" : "NO") << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

