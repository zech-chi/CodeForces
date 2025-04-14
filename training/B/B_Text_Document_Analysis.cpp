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
		string s; cin >> s;
		int x = 0;
		int y = 0;
		bool is_open = false;
		int cur_x = 0;
		int cur_y = 0;
		
		for (int i = 0; i < s.size(); i++) {
			char c = s[i];
			if (c == '(') {
				is_open = true;
				x = max(x, cur_x);
				cur_x = 0;
			} else if (c == ')') {
				is_open = false;
				y += (cur_y > 0);
				cur_y = 0;
			} else {
				if (is_open) {
					if (c == '_') {
						y += (cur_y > 0);
						cur_y = 0;
					} else {
						cur_y++;
					}
				} else {
					if (c == '_') {
						x = max(x, cur_x);
						cur_x = 0;
					} else {
						cur_x++;
					}
				}
			
			}
		}

		x = max(x, cur_x);

		cout << x << " " << y << "\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
