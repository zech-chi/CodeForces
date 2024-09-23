#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int  abs(int a) {
    if (a < 0)
        return (-a);
    return (a);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    int x, y;

    for (int r = 0; r < 5; r++) {
        for (int c = 0; c < 5; c++) {
            cin >> a;
            if (a == 1) {
                x = c;
                y = r;
            }
        }
    }

    cout << abs(x - 2) + abs(y - 2) << "\n";
}
