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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    string bits; cin >> bits;
    bool stop = false;
    char cur, prev;
    vector<char> stack;
    for (int i = 0; i < n ; i++) {
        stack.push_back(bits[i]);
        stop = false;
        while (!stop && stack.size() >= 2) {
            cur = stack[stack.size() - 1];
            prev = stack[stack.size() - 2];
            if (cur != prev) {
                stack.pop_back();
                stack.pop_back();
            } else {
                stop = true;
            }
        }
    }
    cout << stack.size() << "\n";
    return (0);
}

