#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <iterator>
#include <set>
#include <vector>
#include <numeric>
typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t; cin >> n >> t;
    if (t == 10 && n == 1) {
        cout << "-1";
    } else if (t < 10) {
        while (n--)
            cout << t;
    } else {
        cout << "1";
        while (--n) {
            cout << "0";
        }
    }
    cout << "\n";
}
