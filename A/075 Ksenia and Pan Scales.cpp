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
#include <iomanip>
typedef long long ll;
using namespace std;
const double PI = 3.141592653589793;

int abs(int x) { return (x > 0 ? x : -x); }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2; cin >> s1 >> s2;
    int pos = s1.find("|");
    string lefts = s1.substr(0, pos);
    string rights = s1.substr(pos + 1);
    int diff = lefts.size() - rights.size();
    if (abs(diff) > s2.size() || (s2.size() - abs(diff)) % 2) {
        cout << "Impossible\n";
        return (0);
    }
    int i = 0;
    while (i < s2.size()) {
        if (diff > 0) {
            rights += s2[i++];
            diff--;
        } else if (diff < 0) {
            lefts += s2[i++];
            diff++;
        } else {
            lefts += s2[i++];
            rights += s2[i++];
        }
    }
    cout << lefts << "|";
    cout << rights << "\n";
}

