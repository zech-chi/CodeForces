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

int max(int x, int y) { return (x > y ? x : y); }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a;
    cin >> b;

    if (a == b) 
        cout << "-1\n";
    else
        cout << max(a.size(), b.size()) << "\n";
}