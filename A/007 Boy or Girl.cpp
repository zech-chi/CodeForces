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

    static int tab[26];
    string name;
    cin >> name;
    for (int i = 0; i < name.size(); i++) {
        tab[name[i] - 'a'] = 1;
    }
    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (tab[i] == 1)
            count++;
    }
    if (count % 2)
        cout << "IGNORE HIM!\n";
    else
        cout << "CHAT WITH HER!\n";
}
