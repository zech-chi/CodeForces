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

    int a, b;
    cin >> a >> b;
    int y = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        y++;
    }
    cout << y << "\n";
}
