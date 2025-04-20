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
    void dfs(vector<vector<int>> &graph, vector<bool> &visited, int node) {
        if (visited[node]) return;
        visited[node] = true;

        for (int i = 0; i < graph[node].size(); i++) {
            dfs(graph, visited, graph[node][i]);
        }
    }

    void dfs2(vector<vector<int>> &graph, vector<bool> &visited, int node, stack<int> &st) {
        if (visited[node]) return;
        visited[node] = true;
        st.push(node);

        for (int i = 0; i < graph[node].size(); i++) {
            dfs(graph, visited, graph[node][i]);
        }
    }


    void solve() {
        int n, m, s; cin >> n >> m >> s;
        vector<vector<int>> graph(n + 1);
        vector<bool> visited(n + 1, false);;
        stack<int> st;
        int u, v;
        int cnt = 0;

        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            graph[u].push_back(v);
        }

        // cout << "\n\n";

        // for (int i = 1; i <= n; i++) {
        //     cout << i << " :";
        //     for (int j = 0; j < graph[i].size(); j++) {
        //         cout << " " << graph[i][j];
        //     }
        //     cout << "\n";
        // }


        dfs(graph, visited, s);

        for (int i = 1; i <= n; i++) {
            if (!visited[i]) dfs2(graph, visited, i, st);
        }

        fill(visited.begin(), visited.end(), false);

        while (!st.empty()) {
            if (!visited[st.top()]) {
                dfs(graph, visited, st.top());
                cnt++;
            }
            st.pop();
        }

        // cout << "\n\n";

        // for (int i = 1; i <= n; i++) {
        //     cout << i << " -> " << (visited[i] ? "true" : "false") << "\n";
        // }

        cout << cnt << "\n";
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
