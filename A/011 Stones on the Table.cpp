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

    int n;
    string s;
    cin >> n;
    cin >> s;
    int count = 0;
    int res = 0;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1])
            count++;
        else {
            res += count;
            count = 0;
        }
    }
    res += count;
    cout << res << "\n";
}
