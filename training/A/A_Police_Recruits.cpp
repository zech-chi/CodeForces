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
    int police = 0;
    int crimes = 0;
    int action;
    for (int i = 0; i < n; i++) {
        cin >> action;
        if (action == -1 && police)
            police--;
        else if (action == -1) 
            crimes++;
        else
            police += action;
    }
    cout << crimes << "\n";
}
