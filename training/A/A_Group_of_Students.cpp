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
	int m; cin >> m;
	vector<int> c(m);
	vector<int> lr(m);
	vector<int> rl(m);

	for (int i = 0; i < m; i++) {
		cin >> c[i];
		lr[i] = c[i];
		rl[i] = c[i];
	}

	for (int i = 1; i < m; i++) {
		lr[i] += lr[i - 1];
	}

	for (int i = m - 2; i >= 0; i--) {
		rl[i] += rl[i + 1];
	}
	
	int x, y; cin >> x >> y;
	
	for (int i = 1; i < m; i++) {
		int s1 = lr[i - 1];
		int s2 = rl[i];
		if (x <= s1 && s1 <= y && x <= s2 && s2 <= y) {
			cout << i + 1 << "\n";
			return;
		}
	}
	
	cout << "0\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}

