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
#include <map>
#include <vector>
#include <numeric>
#include <cmath>
#include <stack>
#include <iomanip>
#include <functional>
typedef long long ll;
using namespace std;
#define abs(a) (((a) > 0) ? (a) : (-(a)))
#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) > (b)) ? (b) : (a))

size_t combinedHash(const set<int>& numbers) {
    size_t h = 0;
    hash<int> intHasher;

    for (int num : numbers) {
        h ^= intHasher(num) + 0x9e3779b9 + (h << 6) + (h >> 2);
    }
    return h;
}

void solve()
{
    int n, m; cin >> n >> m;
    vector<set<int> > friends(n + 1);
    vector<size_t> hashes(n + 1, 0);
    int a, b;
    set<int>::iterator it;
    

    while (m--) {
        cin >> a >> b;
        friends[a].insert(b);
        friends[b].insert(a);
    }

    for (int i = 1; i <= n; i++) {
        friends[i].insert(i);
        hashes[i] = combinedHash(friends[i]);
    }


    for (int i = 1; i <= n; i++) {
        it = friends[i].begin();
        while (it != friends[i].end()) {
            if (*it == i) {
                it++;
                continue;
            }
            if (hashes[i] != hashes[*it]) {
                cout << "NO\n";
                return ;
            }
            it++;
        }
    }
    cout << "YES\n";
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

