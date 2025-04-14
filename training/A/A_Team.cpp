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

    int n;
    cin >> n;
    int a, b, c;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        if (a + b + c > 1)
            ans++;
    }
    cout << ans << "\n";
}
