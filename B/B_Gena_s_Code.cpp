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
    bool isbe(string s) {
        if (s.size() == 1 && s[0] == '1')
            return (true);
        if (s[0] != '1')
            return (false);
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != '0')
                return (false);
        }
        return (true);
    }

    void solve() {
        int n; cin >> n;
        string s;
        string notbe = "";
        int cnt = 0;
        int zero = false;

        while (n--) {
            cin >> s;
            if (s.size() == 1 && s[0] == '0') {
                zero = true;
            } else if (isbe(s)) {
                cnt += s.size() - 1;
            } else {
                notbe = s;
            }
    
            
        }

        if (zero) {
            cout << "0\n";
            return ;
        }


        if (notbe.empty()) {
            cout << "1";
        } else {
            cout << notbe;
        }
        while (cnt--) {
            cout << "0";
        }
        cout << "\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}