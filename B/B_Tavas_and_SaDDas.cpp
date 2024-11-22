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
	int res;
	int counter;
	string s;

public:
	void backtrack(string ss, int i, int size) {
		if (i == size) {
			counter++;
			if (ss == s) {
				res = counter;
			}
			return;
		}
		backtrack(ss + "4", i + 1, size);
		backtrack(ss + "7", i + 1, size);
	}

    void solve() {
		cin >> s;
		res = -1;
		int size = 1;
		counter = 0;
		while (res == -1) {
			backtrack("4", 1, size);
			if (res == -1)
				backtrack("7", 1, size);
			size++;
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
