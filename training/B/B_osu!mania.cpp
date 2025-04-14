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
			int n; cin >> n;
			vector<int> v;
			while (n--) {
				string s; cin >> s;
				int pos = s.find('#');
				if (pos != string::npos) {
					v.push_back(pos + 1);
				}
			}
			reverse(v.begin(), v.end());
			for (int i = 0; i < v.size(); i++)
				cout << v[i] << " ";
			cout << endl;
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
