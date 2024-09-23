#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <set>
#include <vector>
#include <numeric>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int y, w;
    cin >> y >> w;
    int mx = max(y, w);
    int a = 6 - mx + 1;
    int b = 6;
    int _gcd = gcd(a, b);
    cout << a / _gcd << "/" << b / _gcd << "\n";

}
