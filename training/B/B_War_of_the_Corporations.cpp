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
		string s1, s2; cin >> s1 >> s2;
		int res = 0;
		int i, j, x = 0;

		while (x < s1.size()) {
			i = x;
			j = 0;
			while (i < s1.size() && j < s2.size() && s1[i] == s2[j]) {
				i++;
				j++;
			}

			if (j == s2.size()) {
				res++;
				x = i;
			} else {
				x++;
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
