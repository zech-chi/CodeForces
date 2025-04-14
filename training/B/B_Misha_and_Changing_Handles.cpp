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
		int q; cin >> q;
		string old_handle, new_handle;
		map<string, string> mp;

		for (int i = 0; i < q; i++) {
			cin >> old_handle >> new_handle;
			auto it = mp.find(old_handle);
			if (it == mp.end()) {
				mp[new_handle] = old_handle;
			} else {
				string save = it->second;
				mp.erase(old_handle);
				mp[new_handle] = save;
			}
		}
		
		cout << mp.size() << "\n";
		for (auto it = mp.begin(); it != mp.end(); it++) {
			cout << it->second << " " << it->first << "\n";
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
