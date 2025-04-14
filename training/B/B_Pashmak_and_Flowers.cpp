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
	ll sumn(ll n) {
		return (n * (n - 1)) / 2;
	}

    void solve() {
		ll n; cin >> n;
    	vector<ll> v(n);
		ll maxi = 1;
		ll mini = 1e9;

		for (ll i = 0; i < n; i++) {
			cin >> v[i];
			maxi = max(maxi, v[i]);
			mini = min(mini, v[i]);
		}

		ll cnt_maxi = 0;
		ll cnt_mini = 0;

		for (ll i = 0; i < n; i++) {
			if (v[i] == maxi)
				cnt_maxi++;
			else if (v[i] == mini)
				cnt_mini++;
		}

		if (maxi == mini)
			cout << "0 " << sumn(cnt_maxi) << "\n";
		else
			cout << (maxi - mini) << " " << (cnt_maxi * cnt_mini) << "\n";
	
	}

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
