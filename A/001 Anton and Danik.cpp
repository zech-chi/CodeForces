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
    int d = 0, a = 0;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A')
            a++;
        else
            d++;
    }

    if (a > d)
        cout << "Anton\n";
    else if (a < d)
        cout << "Danik\n";
    else
        cout << "Friendship\n";
}
