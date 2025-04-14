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

		int a = 0;
		int f = 0;
		int ii = 0;

		for (int i = 0; i < n; i++) {
			if (s[i] == 'A')
				a++;
			else if (s[i] == 'F')
				f++;
			else
				ii++;
		}


		if (ii == 0)
			cout << a << "\n";
		else if (ii == 1)
			cout << "1\n";
		else
			cout << "0\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
