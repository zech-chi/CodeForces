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

		int i = n - 1;
		int maxi = v[i];
		while (i >= 0) {
			maxi = min(maxi, v[i]);
			if (i == 0)
				break;
			else if (i == 1)
				i--;
			else {
				if (v[i - 1] > v[i - 2])
					i--;
				else
					i -= 2;
			}
		}

		cout << maxi << "\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
