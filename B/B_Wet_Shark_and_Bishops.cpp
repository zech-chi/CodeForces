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
	int sum(int x) {
		return ((x * (x - 1)) / 2);
	}

    void solve() {
		int n, x, y; cin >> n;
		map<int, int> pos, neg;
		map<int, int>::iterator it;
		int res = 0;


		for (int i = 0; i < n; i++) {
			cin >> x >> y;
			pos[y - x]++;
			neg[y + x]++;
		}

		for (it = pos.begin(); it != pos.end(); it++) {
			res += sum(it->second);
		}

		for (it = neg.begin(); it != neg.end(); it++) {
			res += sum(it->second);
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
