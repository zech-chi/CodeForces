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
	void display(vector<int> &v) {
		cout << "--> ";
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
		cout << "\n";
	}

    void solve() {
		int n; cin >> n;
		vector<int> v(n);

		for (int i = 0; i < n; i++) cin >> v[i];
		
		sort(v.begin(), v.end());

		while (v[0] + 1 <= v[n - 1] - 1) {
			v[0] += 1;
			v[n - 1] -= 1;
			sort(v.begin(), v.end());
		}

		int maxi = 1;
		int cnt = 1;
		for (int i = 1; i < n; i++) {
			if (v[i] == v[i - 1]) cnt++;
			else {
				maxi = max(maxi, cnt);
				cnt = 1;
			}
		}

		display(v);

		maxi = max(maxi, cnt);
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
