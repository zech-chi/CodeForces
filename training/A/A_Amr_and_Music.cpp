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


void solve()
{
    int n, k; cin >> n >> k;
    vector<int> v(n), indexs(n);
    int count = 0, i;
    vector<int> ans;

    for (i = 0; i < n; i++) {
        cin >> v[i];
        indexs[i] = i;
    }

    sort(indexs.begin(), indexs.end(), [&v](int a, int b) { return v[a] < v[b]; });

    i = 0;
    while (i < n && k > 0) {
        if (k - v[indexs[i]] >= 0) {
            k -= v[indexs[i]];
            ans.push_back(indexs[i] + 1);
        } else {
            break;
        }
        i++;
    }
    if (ans.empty()) {
        cout << "0\n";
        return ;
    }
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}
