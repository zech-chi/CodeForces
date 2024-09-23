#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <set>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string  s, t;
    cin >> s;
    cin >> t;
    int res = 0;
    for (int i = 0; i < t.length(); i++) {
        if (t[i] == s[res])
            res++;
    }
    cout << res + 1 << "\n";
}
