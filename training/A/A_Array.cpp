/*
    zech-chi
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
typedef long long ll;
using namespace std;
#define abs(a) (((a) > 0) ? (a) : (-(a)))
#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) > (b)) ? (b) : (a))


void solve()
{
    int n; cin >> n;
    int a;
    vector<int> pos, neg;
    int zeros = 0;

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a > 0) pos.push_back(a);
        else if (a < 0) neg.push_back(a);
        else zeros++;
    }

    cout << "1 " << neg[neg.size() - 1] << "\n";
    neg.pop_back();
    if (pos.empty()) {
        cout << "2 ";
        cout << neg[neg.size() - 1] << " ";
        neg.pop_back();
        cout << neg[neg.size() - 1] << "\n";
        neg.pop_back();
    } else {
        cout << "1 " << pos[pos.size() - 1] << "\n";
        pos.pop_back();
    }

    cout << pos.size() + neg.size() + zeros << " ";

    while (zeros) {
        cout << "0 ";
        zeros--;
    }

    while (!pos.empty()) {
        cout << pos[pos.size() - 1] << " ";
        pos.pop_back();
    }

    while (!neg.empty()) {
        cout << neg[neg.size() - 1] << " ";
        neg.pop_back();
    }

    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}
