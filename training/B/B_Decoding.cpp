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
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    string s; cin >> s;
    string ans(n, '\0');
    int l, r;
    int i = 0;
    while (i < n) {
        if (i == 0) {
            if (n % 2) {
                ans[n / 2] = s[0];
                l = n / 2 - 1;
                r = n / 2 + 1;
                i++;
            } else {
                r = n / 2;
                l = n / 2 - 1;
            }
        } 
        if (i < n) {
            ans[l--] = s[i++];
            ans[r++] = s[i++];
        }
    }
    cout << ans << "\n";
}
