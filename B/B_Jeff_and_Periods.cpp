/*
*   zech-chi
*/
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
#include <map>
typedef long long ll;
using namespace std;
#define abs(a) (((a) > 0) ? (a) : (-(a)))
#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) > (b)) ? (b) : (a))


void solve()
{
    int n; cin >> n;
    int a;
    map<int, int> res;
    map<int, int> lastIndex;
    set<int> bad;

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (bad.find(a) != bad.end())
            continue;
        map<int, int>::iterator it1 = res.find(a);
        map<int, int>::iterator it2 = lastIndex.find(a);
        if (it1 == res.end()) {
            lastIndex[a] = i;
            res[a] = 0;
        } else {
            if (it1->second == 0) {
                it1->second = i - it2->second;
                it2->second = i;
            } else {
                if (it1->second != i - it2->second) {
                    res.erase(it1);
                    bad.insert(a);
                } else {
                    it2->second = i;
                }
            }
        }
    }

    cout << res.size() << "\n";
    for (map<int, int>::iterator it = res.begin(); it != res.end(); it++) {
        cout << it->first << " " << it->second << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

