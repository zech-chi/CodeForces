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
		vector<int> chars(26, 0);

		for (int i = 0; i < s.size(); i++) {
			chars[s[i] - 'a']++;
		}

		int x = 0, y = 0;


		for (int i = 0; i < 26; i++) {
			if (chars[i] == 0)
				x++;
			else
				y += chars[i] - 1;
		}

		if (x >= y) cout << y << "\n";
		else cout << "-1\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
