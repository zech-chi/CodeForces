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
    vector<int> v1(n), v2(n);
    for (int &a : v1) cin >> a;
    for (int i = 0; i < n; i++) {
        v2[v1[i] - 1] = i + 1;
    }
    for (int a: v2) cout << a << " ";
    cout << "\n";
}
