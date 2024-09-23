#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int abs(int a) {
    if (a < 0)
        return (-a);
    return (a);
}

int min(int a, int b) {
    if (a > b)
        return (b);
    return (a);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    char prev = 'a';
    int res = 0, dis1, dis2;
    for (int i = 0; i < s.size(); i++) {
        dis1 = abs(s[i] - prev);
        dis2 = 26 - dis1;
        res += min(dis1, dis2);
        prev = s[i];
    }
    cout << res << "\n";
}
