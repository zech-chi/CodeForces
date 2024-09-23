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

    string s; cin >> s;
    string mix = "WUB";
    int l, r, i;
    bool printspace = false;
    l = 0;
    while (l < s.size()) {
        r = l;
        i = 0;
        while (r < s.size() && s[r] == mix[i]) {
            r++;
            i++;
        }
        if (i == 0) {
            cout << s[l++];
            printspace = true;
        }
        else if (i < 3) {
            while (l < r)
                cout << s[l++];
            printspace = true;
        } else {
            if (printspace)
                cout << " ";
            printspace = false;
            l = r;
        }
    }
    cout << "\n";
}
