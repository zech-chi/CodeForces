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
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;
    if (s.size() == 1) {
        cout << "0\n";
        return (0);
    }
    int n = 0;
    for (int i = 0; i < s.size(); i++) {
        n += (s[i] - '0');
    }
    int moves = 1;
    int m;
    while (n > 9) {
        m = 0;
        while (n > 0) {
            m += n % 10;
            n /= 10;
        }
        n = m;
        moves++;
    }
    cout << moves << "\n";
}
