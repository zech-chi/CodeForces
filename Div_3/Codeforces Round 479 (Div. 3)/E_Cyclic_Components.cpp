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
    void visit(map<int, vector<int> >& graph, int node, vector<bool> &visited) {
        visited[node] = true;
        for (int i = 0; i < graph[node].size(); i++) {
            if (!visited[graph[node][i]])
                visit(graph, graph[node][i], visited);
        }
    }

    void solve() {
        int n, m; cin >> n >> m;
        map<int, vector<int> > graph;
        vector<bool> visited(n + 1, false);

        for (int i = 1; i <= n; i++) {
            graph[i] = {};
        }

        int u, v;
        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        for (auto it = graph.begin(); it != graph.end(); it++) {
            if (it->second.size() != 2 && !visited[it->first]) {
                visit(graph, it->first, visited);
            }
        }

        int cnt = 0;

        for (auto it = graph.begin(); it != graph.end(); it++) {
            if (!visited[it->first]) {
                cnt++;
                visit(graph, it->first, visited);
            }
        }

        cout << cnt << "\n";

        // for (auto it = graph.begin(); it != graph.end(); it++) {
        //     cout << it->first << " :";
        //     for (int x: it->second) {
        //         cout << " " << x;
        //     }
        //     cout << "\n";
        // }
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
