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
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		map<char, int> ms1;
		map<char, int>::iterator it;

		for (int i = 0; i < s1.size(); i++) {
			if (s1[i] == ' ')
				continue;
			ms1[s1[i]]++;
		}

		for (int i = 0; i < s2.size(); i++) {
			if (s2[i] == ' ')
				continue;
			
			it = ms1.find(s2[i]);
			if (it == ms1.end() || it->second == 0) {
				cout << "NO\n";
				return ;
			} else {
				it->second--;
			}
		}

		cout << "YES\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
