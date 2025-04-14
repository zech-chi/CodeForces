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
	bool bs(vector<int> &dirty, int stair) {
		int l = 0;
		int r = dirty.size() - 1;
		int m;

		while (l <= r) {
			m = l + (r - l) / 2;
			if (dirty[m] > stair)
				r = m - 1;
			else if (dirty[m] < stair)
				l = m + 1;
			else
				return (true);
		}

		return (false);
	}

    void solve() {
		int n, m; cin >> n >> m;
		vector<int> dirty(m);

		for (int i = 0; i < m; i++) {
			cin >> dirty[i];
		}

		sort(dirty.begin(), dirty.end());
    	
		if (bs(dirty, 1) || bs(dirty, n)) {
			cout << "NO\n";
			return ;
		}

		for (int i = 1; i < m -1; i++) {
			if (dirty[i] == dirty[i - 1] + 1  && dirty[i] + 1 == dirty[i + 1]) {
				cout << "NO\n";
				return ;
			}
		}

		cout << "YES\n";
	
	}

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
