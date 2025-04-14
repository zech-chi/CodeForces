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
		int n, k; cin >> n >> k;
		vector<int> rank(k + 1, 0);
		int rn;

		for (int i = 0; i < n; i++) {
			cin >> rn;
			rank[rn]++;
		}

		int gold = 0;
		bool repeat = true;

		while (repeat) {
			repeat = false;
			for (int i = k - 1; i > 0; i--) {
				if (rank[i] > 0) {
					rank[i]--;
					rank[i + 1]++;
					repeat = true;
				}
			}
			if (repeat)
				gold++;
		}

		cout << gold << "\n";


    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
