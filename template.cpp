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

class Solution {
private:

public:
    void solve() {

    }

    void start() {
        ll t = 1;
        cin >> t;
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
