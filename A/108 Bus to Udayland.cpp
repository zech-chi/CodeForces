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

int min(int x, int y) { return (x > y ? y : x); }
int max(int x, int y) { return (x < y ? y : x); }
int abs(int x) { return (x > 0 ? x : -x); }

void solve()
{
    int n; cin >> n;
    vector<pair<string, string> > bus(n);
    int pos;
    string line;
    for (int i = 0; i < n; i++) {
        cin >> line;
        pos = line.find('|');
        bus[i] = make_pair(line.substr(0, pos), line.substr(pos + 1));
    }

    for (int i = 0; i < n; i++) {
        cout << bus[i].first << "     " << bus[i].second << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}
