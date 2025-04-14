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
			ll sum = 0;
			int count_2 = 0;
			int count_3 = 0;
			for (int i = 0; i < s.size(); i++) {
				sum += (s[i] - '0');
				if (s[i] == '2')
					count_2++;
				else if (s[i] == '3')
					count_3++;
			}

			if (sum % 9 == 0) {
				cout << "YES\n";
				continue;
			}
			int mod = 9 - sum % 9;
			if (mod % 2)
				mod += 9;
				
			while (mod > 0 && (count_2 > 0 || count_3 > 0)) {
				if (mod >= 6) {
					if (count_3 > 0) {
						mod -= 6;
						count_3--;
					} else if (count_2 > 0) {
						mod -= 2;
						count_2--;
					} else {
						break;
					}
				} else {
					if (count_2 > 0) {
						mod -= 2;
						count_2--;
					} else {
						break;
					}
				}
			}

			if (mod > 0) cout << "NO\n";
			else cout << "YES\n";
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
