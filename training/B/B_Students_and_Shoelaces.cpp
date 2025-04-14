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
        int a, b;
        map<int, set<int>> links;

        for (int i = 0; i < m; i++) {
            cin >> a >> b;
            links[a].insert(b);
            links[b].insert(a);
        }

        int res = 0;
        bool stop = false;

        // for (auto it = links.begin(); it != links.end(); it++) {
        //     cout << it->first << ": ";
        //     for (auto it2 = it->second.begin(); it2 != it->second.end(); it2++) {
        //         cout << *(it2) << ", ";
        //     }
        //     cout << "\n";
        // }
        // cout << "\n";

        while (!stop) {
            stop = true;
            vector<int> to_remove;
            vector<pair<int,int>> ttt;
            for (auto it = links.begin(); it != links.end(); ++it) {
                if (it->second.size() == 1) {
                    // cout << "kkk -->>  " << it->first << "\n";
                    stop = false;
                    ttt.push_back({*it->second.begin(), it->first});
                    to_remove.push_back(it->first);
                }
            }

            for (int node : to_remove) {
                links.erase(node);
            }

            for (int i = 0; i < ttt.size(); i++) {
                links[ttt[i].first].erase(ttt[i].second);
            }

            if (!stop) res++;
        }

        // for (auto it = links.begin(); it != links.end(); it++) {
        //     cout << it->first << ": ";
        //     for (auto it2 = it->second.begin(); it2 != it->second.end(); it2++) {
        //         cout << *(it2) << ", ";
        //     }
        //     cout << "\n";
        // }

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
