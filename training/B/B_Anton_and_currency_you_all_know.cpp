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
		string s; cin >> s;
		vector<int> even_indexs;
    		
		for (int i = 0; i < s.size(); i++) {
			int d = s[i] - '0';
			if (d % 2 == 0)
				even_indexs.push_back(i);
		}

		if (even_indexs.empty()) {
			cout << "-1\n";
			return;
		}

		int best_i = -1;

		for (int i = 0; i < even_indexs.size(); i++) {
			char c = s[even_indexs[i]];
			if (c < s[s.size() - 1]) {
				best_i = even_indexs[i];
				break;
			}
		}

		if (best_i == -1) {
			best_i = even_indexs[even_indexs.size() - 1];
		}

		swap(s[best_i], s[s.size() - 1]);
		cout << s << "\n";
	
	}

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
