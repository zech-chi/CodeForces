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
	int n, m; cin >> n >> m;
	vector<int> friends(n + 1, 0);
	int a, b, c;
	
	while (m--) {
		cin >> a >> b >> c;
		friends[a] += c;
		friends[b] -= c;
	}

	int sum = 0;
	for (int i = 0; i <= n; i++) {
		if (friends[i] > 0)
			sum += friends[i];
	}

	cout << sum << "\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
