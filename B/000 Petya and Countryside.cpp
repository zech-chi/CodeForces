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

int max(int a, int b) { return (a > b ? a : b);}
int min(int a, int b) { return (a < b ? a : b);}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> v(n);
    for (int &a: v) {
        cin >> a;
    }
    int l, r;
    int ans = 1, counter;
    int mn;
    for (int i = 0; i < n; i++) {
        counter = 1;
        l = i - 1;
        mn = v[i];
        while (l >= 0 && v[l] <= mn) {
            mn = v[l];
            // cout << "index = " << i << ", l = " << l << ", mn = " << mn <<  '\n';
            l--;
            counter++;
        }
        r = i + 1;
        mn = v[i];
        while (r < n && v[r] <= mn) {
            mn = v[r];
            // cout << "index = " << i << ", r = " << r << ", mn = " << mn <<  '\n';
            r++;
            counter++;
        }
        ans = max(ans, counter);
    }
    cout << ans << "\n";
}
