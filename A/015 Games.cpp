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
    int h, g;
    vector<pair<int, int> > v(n);
    for (int i = 0; i < n; i++) {
        cin >> h >> g;
        v[i] = make_pair(h, g);
    }

    int res = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i].first == v[j].second)
                res++;
            if (v[i].second == v[j].first)
                res++;
        }
    }
    cout << res << "\n";
}
