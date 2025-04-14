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
		int n, t, c; cin >> n >> t >> c;
		vector<int> v(n);
		queue<int> window;
		int res = 0;

		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}	
		
		int l = 0, r = 0;
		while (r < c) {
			if (v[r] <= t)
				window.push(r);
			r++;
		}

		if (window.size() == c)
			res++;

		for (r = c; r < n; r++) {
			if (v[r] <= t)
				window.push(r);
			if (window.front() == l)
				window.pop();
			if (window.size() == c)
				res++;
			l++;
		}

		cout << res << "\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
