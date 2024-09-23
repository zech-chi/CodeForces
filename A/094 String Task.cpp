#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <iterator>
#include <set>
#include <vector>
#include <numeric>
#include <cmath>
#include <stack>
#include <iomanip>
typedef long long ll;
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    for (char a : "aoyeui") {
        if (a == c)
            return (true);
    }
    return (false);
}

char transform(char c) {
    if ('a' <= c && c <= 'z')
        return (c);
    return (c + 32);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;
    for (char c : s) {
        if (!isVowel(c)) {
            cout << "." << transform(c);
        }
    }
    cout << "\n";
    return (0);
}

