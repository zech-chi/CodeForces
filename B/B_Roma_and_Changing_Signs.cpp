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

int minIndex(vector<int> &v) {
    int mini = v[0];
    int miniIndex = 0;

    for (int i = 1; i < v.size(); i++) {
        if (v[i] < mini) {
            mini = v[i];
            miniIndex = i;
        }
    }

    return (miniIndex);
}

void solve()
{
    int n, k; cin >> n >> k;
    vector<int> v(n);
    int i;

    for (i = 0; i < n; i++) {
        cin >> v[i];
    }

    i = 0;
    while (k && i < n && v[i] < 0) {
        v[i] *= -1;
        i++;
        k--;
    }

    if (k) {
        v[minIndex(v)] *= pow(-1, k);
    }

    ll sum = 0;
    for (i = 0; i < n; i++) {
        sum += v[i];
    }
    
    cout << sum << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

