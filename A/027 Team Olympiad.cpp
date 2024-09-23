#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <iterator>
#include <set>
#include <vector>
#include <numeric>
using namespace std;

int ft_min(int a, int b)
{
    return (a > b ? b : a);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int> > v(3);
    int n, t;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> t;
        v[t - 1].push_back(i);
    }

    int n_teams = v[0].size();
    n_teams = ft_min(n_teams, v[1].size());
    n_teams = ft_min(n_teams, v[2].size());

    cout << n_teams << "\n";
    for (int i = 0; i < n_teams; i++) {
        cout << v[0][i] << " " << v[1][i] << " " << v[2][i] << "\n";
    }
}