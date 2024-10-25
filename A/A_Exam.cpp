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
    int n; cin >> n;
    int i = 1;
    int j = n / 2 + 1 + n % 2;
    vector<int> ans;
    
    if (n < 3) {
        cout << "1\n1\n";
        return ;
    }

    while (i <= (n / 2 + n % 2) && j <= n) {
        ans.push_back(i++);
        ans.push_back(j++);
    }
    if (i <= (n / 2 + n % 2) && (ans.empty() || ans[ans.size() - 1] > i + 1))
        ans.push_back(i);

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

