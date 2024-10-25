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

char    get(string &keybord, char c, bool left) {
    char res = 'z';
    for (int i = 0; i < keybord.size(); i++) {
        if (keybord[i] == c) {
            if (left)
                res = keybord[i + 1];
            else
                res = keybord[i - 1];
            break;
        }
    }
    return (res);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string keybord = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string text;
    char direction; cin >> direction;
    cin >> text;
    for (int i = 0; i < text.size(); i++) {
        cout << get(keybord, text[i], direction == 'L');
    }
    cout << "\n";
}
