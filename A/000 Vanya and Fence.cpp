#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t, a;
    cin >> n >> t;
    int res = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (t < a)
            res += 2;
        else
            res += 1;
    }
    cout << res << "\n";
}
