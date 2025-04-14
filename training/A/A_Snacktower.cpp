#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <iterator>
#include <set>
#include <vector>
#include <numeric>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> v(n + 1, 0);
    int m = n, a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v[a]++;
        while (v[m]) {
            cout << m-- << " ";
        }
        cout << "\n";
    }
}
