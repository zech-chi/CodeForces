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

/*
    25
    50
    75
   100
*/

class Solution {
private:

public:
    void swap_s(string &s) {

    }

    void solve() {
        string s; cin >> s;
        int best_moves = -1;
        int cur_moves;
        int x, y, z;
        bool flag = true;

        for (string yx : {"25", "50", "75"}) {
            x = s.rfind(yx[1]);
            y = s.rfind(yx[0]);
            if (x != string::npos && y != string::npos) {
                cur_moves = (s.size() - x - 1) + (s.size() - y - 2);
                flag = true;
                if (y > x) cur_moves++;
                z = s.find('0');
                if ((x == 0 || y == 0) && (z != string::npos) && z < 3 && z != x && z != y) {
                    int k = -1;
                    for (int i = 0; i < s.size(); i++) {
                        if (i == x || i == y || s[i] == '0') continue;
                        k = i;
                        break;
                    }
                    if (k != -1) {
                        cur_moves += (k - z);
                    } else {
                        flag = false;
                    }
                } 
                
                if (flag) {
                    // cout << yx << "\n";
                    // cout << cur_moves << "\n";
                    if (best_moves == -1) best_moves = cur_moves;
                    best_moves = min(best_moves, cur_moves);
                }
            }
        }

        // 00
        int count_zeros = count(s.begin(), s.end(), '0');
        if (count_zeros >= 2) {
            x = s.rfind('0');
            y = s.rfind('0', x - 1);
            if (x != string::npos && y != string::npos) {
                cur_moves = (s.size() - x - 1) + (s.size() - y - 2);
                if (y > x) cur_moves++;
                if (best_moves == -1) best_moves = cur_moves;
                best_moves = min(best_moves, cur_moves);
            }
        }

        cout << best_moves << "\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
