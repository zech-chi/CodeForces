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

    string  input;
    cin >> input;
    vector<int> v;
    for (char c: input) {
        if (isdigit(c))
            v.push_back(c - '0');
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i < v.size() - 1)
            cout << "+";
    }
    cout << "\n";
}
