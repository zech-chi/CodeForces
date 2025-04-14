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
		string bits;

		map<char, string> brainfuck;
		brainfuck['>'] = "1000";
		brainfuck['<'] = "1001";
		brainfuck['+'] = "1010";
		brainfuck['-'] = "1011";
		brainfuck['.'] = "1100";
		brainfuck[','] = "1101";
		brainfuck['['] = "1110";
		brainfuck[']'] = "1111";

		for (int i = 0; i < s.size(); i++) {
			bits += brainfuck[s[i]];
		}


		int res = 0;
		int mod = 1000003;
		for (int i = 0; i < bits.size(); i++) {
			res = res * 2 + (bits[i] == '1');
			res %= mod;
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
