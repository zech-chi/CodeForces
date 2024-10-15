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
    vector<int> a(n);
    int m;
    int b;
    int maxi = -1;
    int count = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> b;
        for (int j = 0; j < n; j++) {
            if (b % a[j] == 0) {
                if (maxi == -1 || maxi < (b / a[j])) {
                    maxi = b / a[j];
                    count = 0;
                } 
                if (maxi == (b / a[j])) {
                    count++;
                }
            }
        }
    }

    cout << count << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

