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

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int serja = 0, dima = 0;
    int l = 0, r = n - 1;
    bool    serja_turn = true;
    while (l <= r) {
        if (serja_turn) {
            if (v[l] > v[r]) {
                serja += v[l];
                l++;
            } else {
                serja += v[r];
                r--;
            }
        } else {
            if (v[l] > v[r]) {
                dima += v[l];
                l++;
            } else {
                dima += v[r];
                r--;
            }
        }
        serja_turn = !serja_turn;
    }
    cout << serja << " " << dima << "\n";
}
