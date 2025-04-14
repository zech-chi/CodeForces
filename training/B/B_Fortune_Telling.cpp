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
		vector<int> odd;
		int res = 0;
		int a;
		for (int i = 0; i < n; i++) {
			cin >> a;
			if (a % 2)
				odd.push_back(a);
			else
				res += a;
		}

		if (odd.size() == 0) {
			cout << "0\n";
			return ;
		}
		
		sort(odd.begin(), odd.end());

			
		int i = odd.size() - 1;
		res += odd[i--];

		while (i > 0) {
			res += odd[i--];
			res += odd[i--];
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
