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
		int t; cin >> t;
		while (t--) {
			string s; cin >> s;
			reverse(s.begin(), s.end());
			for (int i = 0; i < s.size(); i++) {
				char c = s[i];
				if (c == 'p')
					cout << 'q';
				else if (c == 'q')
					cout << 'p';
				else
					cout << 'w';
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
