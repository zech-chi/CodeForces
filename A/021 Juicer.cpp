#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <set>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, b, d;
    int orange;
    int jus = 0;
    int res = 0;
    cin >> n >> b >> d;
    for (int i = 0; i < n; i++) {
        cin >> orange;
        if (orange <= b) {
            jus += orange;
        }
        if (jus > d) {
            res++;
            jus = 0;
        }
    }
    cout << res << "\n";
}
