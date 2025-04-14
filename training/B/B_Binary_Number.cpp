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
	void add_one(string &s) {
		int n = s.size();
		for (int i = n - 1; i >= 0; i--) {
			if (s[i] == '0') {
				s[i] = '1';
				return ;
			}
			s[i] = '0';
		}
		s.insert(0, "1");
	}

    void solve() {
		string s; cin >> s;
		
		int res = 0;

		while (s.size() > 1) {
			if (s[s.size() - 1] == '0')
				s.pop_back();
			else
				add_one(s);
			res++;
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
