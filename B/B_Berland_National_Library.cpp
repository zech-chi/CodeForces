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
		char signe;
		int id;
		int res = 0;
		int cnt = 0;
		vector<bool> in_labrary(1e6 + 1, false);

		for (int i = 0; i < n; i++) {
			cin >> signe >> id;
			if (signe == '+') {
				cnt++;
				in_labrary[id] = true;
			} else if (in_labrary[id] == false) {
				res++;
			} else {
				in_labrary[id] = true;
				cnt--;
			}

			res = max(res, cnt);
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
