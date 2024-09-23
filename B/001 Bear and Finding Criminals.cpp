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

    int a, n; cin >> a >> n;
    n--;
    vector<int> v(a);
    for (int &c : v) {
        cin >> c;
    }

    int res = 0, left = n, right = n;
    while (left >= 0 || right < a) {
        if (left >= 0 && right < a) {
            if (v[left] && v[right])
                res += 2;
        } else if (left >= 0 && v[left])
            res++;
        else if (right < a && v[right])
            res++;
        left--;
        right++;
    }
    if (v[n])
        res--;
    cout << res << "\n";
}
