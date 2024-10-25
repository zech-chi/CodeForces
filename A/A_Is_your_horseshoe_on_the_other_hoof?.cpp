#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <set>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> s;
    int     c;

    for (int i = 0; i < 4; i++) {
        cin >> c;
        s.insert(c);
    }
    cout << 4 - s.size() << "\n";
}
