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
		vector<int> v(n);

		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}

		ll maxi = 0;
		for (int i = n - 1; i >= 0; i--) {
			int tmp = v[i];
			v[i] = max(0, maxi - v[i] + 1); 
			maxi = max(maxi, tmp);
		}

		for (int i = 0; i < n; i++) {
			cout << v[i] << " ";
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
