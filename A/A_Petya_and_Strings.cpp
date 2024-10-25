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

    string  s1;
    string  s2;

    cin >> s1;
    cin >> s2;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    if (s1 < s2)
        cout << "-1\n";
    else if (s1 > s2)
        cout << "1\n";
    else
        cout << "0\n";
}
