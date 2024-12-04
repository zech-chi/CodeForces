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
		vector<int> boys(367, 0);
		vector<int> girls(367, 0);
		char gender;
		int start, end;

		for (int i = 0; i < n; i++) {
			cin >> gender >> start >> end;
			
			for (int j = start; j <= end; j++) {
				if (gender == 'M')
					boys[j]++;
				else
					girls[j]++;
			}
			
		}

		int res = 0;
		for (int i = 0; i < 367; i++) {
			res = max(res, 2 * min(boys[i], girls[i]));
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
