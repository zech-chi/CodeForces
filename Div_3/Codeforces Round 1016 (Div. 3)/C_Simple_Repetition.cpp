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
#include <queue>
#include <map>
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


class Solution {
private:

public:
    bool isPrime(ll x) {
        if (x == 1) return false;
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) return false;
        } 
        return true;
    }

    void solve() {
        int t; cin >> t;
        ll x, k;

        while (t--) {
            cin >> x >> k;
            if (x == 1 && k == 2)  cout << "YES\n";
            else if (k != 1) cout << "NO\n";
            else if (isPrime(x)) cout << "YES\n";
            else cout << "NO\n";
        }
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
