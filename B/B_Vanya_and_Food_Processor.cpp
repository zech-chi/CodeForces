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
		int n, h, k; cin >> n >> h >> k;
		vector<int> potato(n);
 
		for (int i = 0; i < n; i++) {
			cin >> potato[i];
		}
 
		ll seconds = 0;
		int cur_processing = 0;
		
	   	for (int i = 0; i < n; i++) {
			if (cur_processing + potato[i] <= h)
				cur_processing += potato[i];
			else
				seconds++, cur_processing = potato[i];

			seconds += cur_processing / k;
			cur_processing	%= k;
		}	
 
		seconds += ceil((float)cur_processing / (float)k);
 
		cout << seconds << "\n";
 
    }
 
};
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
