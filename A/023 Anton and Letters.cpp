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
    string input;
    getline(cin, input);
    static int tab[26];
    int uniq = 0;

    input = input.substr(1, input.size() - 2);
    for (char &ch : input) {
        if (ch != ',' && ch != ' ') {
            if (tab[ch - 'a'] == 0) {
                tab[ch - 'a'] = 1;
                uniq++;
            }
        }
    }

    cout << uniq << "\n";
}
