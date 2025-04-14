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
		vector<pair<int, int>> vv(n);
		int a, b;

		for (int i = 0; i < n; i++) {
			cin >> a >> b;
			vv[i] = {a, b};
		}

		for (int i = 0; i < n; i++) {
			if (vv[i].first != vv[i].second) {
				cout << "rated\n";
				return ;
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++) {
				if (vv[i].first > vv[j].first) {
					cout << "unrated\n";
					return;
				}
			}
		}

		cout << "maybe\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
