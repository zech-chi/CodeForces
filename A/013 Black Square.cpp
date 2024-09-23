#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int calories[4];
    for (int i = 0; i < 4; i++) {
        cin >> calories[i];
    }
    string s;
    cin >> s;
    int res = 0;
    for (int i = 0; i < s.size(); i++) {
        res += calories[s[i] - '0' - 1];
    }
    cout << res << "\n";
}
