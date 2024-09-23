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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    string s; cin >> s;
    static int tab1[26];
    static int tab2[26];

    for (int i = 0; i < n; i++) {
        if ('a' <= s[i] && s[i] <= 'z')
            tab1[s[i] - 'a'] = 1;
        else
            tab2[s[i] - 'A'] = 1;
    }

    bool ispangram = true;
    for (int i = 0; i < 26; i++) {
        if (tab1[i] == 0 && tab2[i] == 0)
            ispangram = false;
    }
    if (ispangram)
        cout << "YES\n";
    else
        cout << "NO\n";
}
