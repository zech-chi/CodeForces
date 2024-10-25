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

int min(int x, int y) { return (x > y ? y : x); }
int max(int x, int y) { return (x < y ? y : x); }
int abs(int x) { return (x > 0 ? x : -x); }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> friends;
    string input;
    int x;

    getline(cin, input);
    istringstream stream(input);
    while (stream >> x) {
        friends.push_back(x);
    }


    int bestpoint = -1, best = -1, cur;
    for (int i = 0; i < friends.size(); i++) {
        cur = 0;
        for (int j = 0; j < friends.size(); j++) {
            cur += abs(friends[j] - friends[i]);
        }
        if (bestpoint == -1 || cur < best) {
            bestpoint = friends[i];
            best = cur;
        }
    }
    cout << best << "\n";
    return (0);
}
