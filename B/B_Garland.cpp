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

		vector<int> cnt1(26, 0);
		vector<int> cnt2(26, 0);


		for (char c: s1) {
			cnt1[c - 'a']++;
		}

		for (char c: s2) {
			cnt2[c - 'a']++;
		}

		int res = 0;

		for (int i = 0; i < 26; i++) {
			if (!cnt1[i] && cnt2[i]) {
				cout << "-1\n";
				return ;
			}
			res += min(cnt1[i], cnt2[i]);
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
