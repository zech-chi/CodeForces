#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <iterator>
#include <set>
#include <vector>
#include <numeric>
typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    string team1 = string(), team2 = string(), team;
    int score1 = 0, score2 = 0;
    for (int i = 0; i < n; i++) {
        cin >> team;
        if (team1.size() == 0 || team1 == team) {
            team1 = team;
            score1++;
        } else {
            team2 = team;
            score2++;
        }
    }
    if (score1 > score2)
        cout << team1 << "\n";
    else
        cout << team2 << "\n";
}
