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

    int k, r;
    cin >> k >> r;
    int res = 1;
    while (true) {
        if ((res * k) % 10 == r || (res * k) % 10 == 0)
            break;
        res++;
    }
    cout << res << "\n";
}
