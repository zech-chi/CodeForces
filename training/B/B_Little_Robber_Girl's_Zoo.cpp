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
		vector<int> vv(n);
		vector<int> vv_s(n);

		for (int i = 0; i < n; i++) {
			cin >> vv[i];
			vv_s[i] = vv[i];
		}

		sort(vv_s.begin(), vv_s.end());
		
		int i, j;
		i = 0;
		while (i < n) {
			if (vv_s[i] == vv[i]) {
				i++;
				continue;
			}
			j = i + 1;
			while (j < n && vv_s[i] != vv[j])
				j++;

			while (j != i) {
				cout << j << " " << j + 1 << "\n";
				swap(vv[j - 1], vv[j]);
				j--;
			}
			i++;
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
