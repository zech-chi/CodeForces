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
		string s1; cin >> s1;
		string s2; cin >> s2;
		string p;
		int n = s1.size();
		bool take_from_s1 = true;

		for (int i = 0; i < n; i++) {
			if (s1[i] == s2[i]) {
				p += s1[i];
			} else {
				if (take_from_s1)
					p += s1[i];
				else
					p += s2[i];
				take_from_s1 = !take_from_s1;
			}
		}

		if (!take_from_s1) {
			cout << "impossible\n";
			return;
		}

		cout << p << "\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
