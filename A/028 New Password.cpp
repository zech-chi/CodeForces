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

    int n, k; cin >> n >> k;
    int tab[26];
    for (int i = 0; i < 26; i++) {
        if (i < k) {
            tab[i] = n / k;
            if (i < n % k)
                tab[i]++;
        } else {
            tab[i] = 0;
        }
    }
    char res[n + 1];
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < tab[i]; j++) {
            res[j * k + i] = 'a' + i;
        }
    }
    res[n] = 0;
    cout << res << "\n";
}