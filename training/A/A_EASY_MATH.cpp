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

    size_t t; cin >> t;
    size_t n, m, a, d;
    size_t count;
    size_t i;
    for (size_t i = 0; i < t; i++) {
        cin >> n >> m >> a >> d;
        set<size_t> st;
        count = 0;
        for (int j = 0; j < 5; j++) {
            for (int i = 1; i * (a + j * d) <= m; i++) {
                if (n <= (i * (a + j * d)))
                    st.insert(i * (a + j * d));
            }
        }
        set<size_t>::iterator left = st.begin();
        if (left != st.end()) {
            set<size_t>::iterator right = next(left);
            count += *left - n;
            while (right != st.end()) {
                // cout << *left << ", " << *right << "\n";
                count += *right - *left - 1;
                left++;
                right++;
            }
            count += m - *left;
        } else {
            count += m - n + 1;
        }
        cout << count << "\n";
    }
}
