/*
    zech-chi
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
    string s; cin >> s;
    int n; cin >> n;
    vector<string> vs(n);
    int i, j;

    for (i = 0; i < n; i++) {
        cin >> vs[i];
    }

    sort(vs.begin(), vs.end());

    for (i = 0; i < n; i++) {
        j = 0;
        while (j < vs[i].size() && j < s.size() && vs[i][j] == s[j])
            j++;

        if (j == s.size()) {
            cout << vs[i] << "\n";
            return ;
        } 
    }

    cout << s << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}
