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
		string a, b; cin >> a >> b;
		vector<int> prefix_sum_zero(b.size(), 0);
		vector<int> prefix_sum_one(b.size(), 0);

		for (int i = 0; i < b.size(); i++) {
			if (b[i] == '0')
				prefix_sum_zero[i] = 1;
			else
				prefix_sum_one[i] = 1;
			if (i > 0) {
				prefix_sum_one[i] += prefix_sum_one[i - 1];
				prefix_sum_zero[i] += prefix_sum_zero[i - 1];	
			}
		}

		ll sum = 0;
		int l, r;
		
		for (l = 0; l < a.size(); l++) {
			r = b.size() - a.size() + l;
			
			if (a[l] == '1') {
				sum += prefix_sum_zero[r];
				if (l > 0)
					sum -= prefix_sum_zero[l - 1];
			} else {
				sum += prefix_sum_one[r];
				if (l > 0)
					sum -= prefix_sum_one[l - 1];
			}
		}


		cout << sum << "\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
