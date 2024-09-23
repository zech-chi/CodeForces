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

bool    isprime(int n) {
    if (n < 2)
        return (false);
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return (false);
    }
    return (true);
}

int nextprime(int n) {
    while (!isprime(n))
        n++;
    return (n);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin >> n >> m;
    if (!isprime(n)) {
        cout << "NO\n";
    } else {
        if (m == nextprime(n + 1))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
