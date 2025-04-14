#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <iterator>
#include <set>
#include <vector>
#include <numeric>
typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    string line;
    char X, Y;
    int l = 0, r = n - 1;
    bool valid = true;
    for (int i = 0; i < n; i++) {
        cin >> line;
        if (valid) {
            if (i == 0) {
                X = line[0];
                if (n > 1) {
                    Y = line[1];
                    if (X == Y)
                        valid = false;
                }
            }
            for (int j = 0; j < n; j++) {
                if (j == l || j == r) {
                    if (X != line[j])
                        valid = false;
                } else {
                    if (Y != line[j])
                        valid = false;
                }
            }
            l++;
            r--;
        }
    }
    if (valid) cout << "YES\n";
    else cout << "NO\n";
}
