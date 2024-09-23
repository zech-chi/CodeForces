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

int min(int x, int y) { return (x > y ? y : x); }
int max(int x, int y) { return (x < y ? y : x); }
int abs(int x) { return (x > 0 ? x : -x); }


void print(char c, int n_time) {
    for (int i = 0; i < n_time; i++)
        cout << c;
}

void solve()
{
    int n; cin >> n;
    int d = 1;
    int star = n / 2;
    bool first_half = true;

    for (int i = 0; i < n; i++) {
        print('*', star);
        print('D', d);
        print('*', star);
        if (d == n) {
            first_half = false;
        }
        if (first_half) {
            star--;
            d += 2;
        } else {
            star++;
            d -= 2;
        }
        cout << "\n";
    } 

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}
