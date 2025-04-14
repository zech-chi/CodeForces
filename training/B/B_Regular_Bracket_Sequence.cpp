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
#include <string>
typedef long long ll;
using namespace std;
#define abs(a) (((a) > 0) ? (a) : (-(a)))
#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) > (b)) ? (b) : (a))


class Solution {
private:

public:
    void solve() {
		string s; cin >> s;
		stack<char> stk;
		int res = 0;

		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '(') {
				stk.push(s[i]);
			} else {
				if (stk.empty() || stk.top() == ')') {
					stk.push(s[i]);
				} else {
					res += 2;
					stk.pop();
				}
			}
		}

		cout << res << "\n";

    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
