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

    size_t ice_cream_counter;
    int n, d, distress = 0;
    char c;
    cin >> n >> ice_cream_counter;
    for (int i = 0; i < n; i++) {
        cin >> c >> d;
        if (c == '-') {
            if (d <= ice_cream_counter) {
                ice_cream_counter -= d;
            } else {
                distress++;
            }
        } else {
            ice_cream_counter += d;
        }
    }
    cout << ice_cream_counter << " " << distress << "\n";
}
