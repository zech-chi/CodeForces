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
        int n, m; cin >> n >> m;
        int s, d, c;
        vector<int> res(n + 1, 0);
        vector<vector<int>> exams;

        for (int i = 0; i < m; i++) {
            cin >> s >> d >> c;
            exams.push_back({s, d, c, i + 1});
        }

        sort(exams.begin(), exams.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });

        for (int i = 0; i < m; i++) {
            s = exams[i][0];
            d = exams[i][1];
            c = exams[i][2];
            res[d] = m + 1;

            for (int j = s; j < d; j++) {
                if (res[j] == 0) {
                    res[j] = exams[i][3];
                    c--;
                }
                if (c == 0) break;
            }

            if (c != 0) {
                cout << "-1\n";
                return;
            }
        }


        for (int i = 1; i <= n; i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
