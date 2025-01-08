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
	set<int> taken;
	vector<vector<int>> v(k);
	int a;

	for (int i = 0; i < k; i++) {
		cin >> a;
		v[i].push_back(a);
		taken.insert(a);
	}

	for (int i = 1; i <= n * k; i++) {
		if (taken.find(i) == taken.end()) {
			for (int j = 0; j < k; j++) {
				if (v[j].size() < n) {
					v[j].push_back(i);
					break;
				}
			}
		}
	}

	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			cout << v[i][j] << " ";
		}
		cout << "\n";
	}
		
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
