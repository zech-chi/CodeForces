/*
*   zech-chi
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
#define endl "\n";
 
// Define ordered_set
template <typename T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
 
// minHeap
// priority_queue<int, vector<int>, greater<int>> minHeap;
 

 
 
class Solution {
private:
 
public:
    void solve() {
        ll n, a, b; cin >> n >> a >> b;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
            if (i > 0) v[i] += v[i - 1];
        }
        SparseTableMax stm;
        stm.build(v, n);
        ll maxSum = -1e18;
        for (ll i = 0; i < n; i++) {
            ll left = i + a - 1;
            ll right = i + b - 1;
            if (left >= n) break;
            if (right >= n) right = n - 1;
            ll curSum = stm.query(left, right);
            if (i > 0) curSum -= v[i - 1];
            maxSum = max(curSum, maxSum);
        }
        cout << maxSum << endl;
    }
 
    void start() {
        ll t = 1;
        // cin >> t;
        while (t--) {
            solve();
        }
    }
};
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Solution().start();
    return (0);
}