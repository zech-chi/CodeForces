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
#include <iomanip>
typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b, remaining = 0; cin >> n;
    vector<pair<int, bool> > scores(n);
    for (int i = 0; i < n; i++) {
        cin >> a;
        scores[i] = make_pair(a / 2, a % 2 == 0);
        remaining += a / 2;
    }

    int j = 0;
    while (remaining != 0 && j < n) {
        if (scores[j].second == false) {
            if (scores[j].first < 0 && remaining > 0) {
                (scores[j].first)--;
                remaining--;
            } else if (scores[j].first > 0 && remaining < 0) {
                (scores[j].first)++;
                remaining++;
            }
        }
        if (j == n)
            j = -1;
        j++;
    }
    
    for (int i = 0; i < n; i++) {
        cout << scores[i].first << "\n";
    }
    return (0);
}

