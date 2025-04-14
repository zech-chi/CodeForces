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

    int n, count = 1, res = 0;
    cin >> n;
    string cur, prev;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cin >> prev;
            continue;
        }
        cin >> cur;
        if (cur == prev)
            count++;
        else {
            prev = cur;
            res++;
            count = 1;
        }
    }
    res++;
    cout << res << "\n";
}
