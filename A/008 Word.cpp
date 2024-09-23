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

    string s;
    cin >> s;
    int count_lower = 0;
    int count_upper = 0;
    for (int i = 0; i < s.size(); i++) {
        if ('a' <= s[i] && s[i] <= 'z')
            count_lower++;
    }
    count_upper = s.size() - count_lower;
    if (count_upper > count_lower)
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << "\n";
}
