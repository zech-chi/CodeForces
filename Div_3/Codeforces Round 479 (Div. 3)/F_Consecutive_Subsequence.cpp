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
    void solve() {
        int n; cin >> n;
        vector<ll> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        map<ll, int> mp;

        for (int i = 0; i < n; i++) {
            auto it = mp.find(v[i] - 1);
            int prev = 0;
            if (it != mp.end())
                prev = it->second;
            if (mp.find(v[i]) != mp.end()) 
                mp[v[i]] = max(mp[v[i]], prev + 1);
            else
                mp[v[i]] = prev + 1;
        }

        int max = 0;
        int end;

        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second > max) {
                end = it->first;
                max = it->second;
            }
        }

        int start = end - max + 1;

        cout << max << "\n";
        for (int i = 0; i < n; i++) {
            if (v[i] == start) {
                cout << i + 1 << " ";
                start++;
            }
            if (start == end + 1)
                break;
        }
        cout << "\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
