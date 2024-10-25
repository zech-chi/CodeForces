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

    int n; cin >> n;
    vector<pair<int, int> > v(n);
    int before, after;
    bool    sure_rated = false;
    for (int i = 0; i < n; i++) {
        cin >> before >> after;
        v[i] = make_pair(before, after);
        if (before != after)
            sure_rated = true;
    }
    if (sure_rated) {
        cout << "rated\n";
        return (0);
    }
    for (int i = 1; i < v.size(); i++) {
        if (v[i].first == v[i - 1].first) {
            cout << "maybe\n";
            return (0);
        }
    }
    cout << "unrated\n";
    return (0);
}
