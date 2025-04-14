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
#include <iomanip>
typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string bits; cin >> bits;
    int l = -1;
    bool flag = false;
    int i = 0;
    while (i < bits.size() && !flag) {
        if (bits[i] == '1') {
            if (l == -1)
                l = i;
            else
                flag = true;
        }
        i++;
    }
    if (!flag && bits.size() % 2 == 0)
        flag = !flag;

    if (l == -1)
        cout << "0\n";
    else
        cout << (bits.size() + 1) / 2 - !flag << "\n";

    return (0);
}

