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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<pair<int, int> > v1(n), v2(n);
    int a, b;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        v1[i] = make_pair(a, b);
        v2[i] = make_pair(b, a);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    // for (int i = 0; i < n; i++) {
    //     cout << "---> " << v1[i].first << " " << v1[i].second << "\n";
    // }

    // for (int i = 0; i < n; i++) {
    //     cout << "+++> " << v2[i].first << " " << v2[i].second << "\n";
    // }

    for (int i = 0; i < n; i++) {
        if ((v1[i].first > v2[i].second && v1[i].second < v2[i].first) ||
             (v1[i].first < v2[i].second && v1[i].second > v2[i].first)) {
                cout << "Happy Alex\n";
                return (0);
             }
    }
    cout << "Poor Alex\n";
    return (0);
}

