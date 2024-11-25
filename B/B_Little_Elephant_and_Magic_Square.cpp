/*
*   zech-chi
*/
#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <iterator>
#include <set>
#include <queue>
#include <map>
#include <vector>
#include <numeric>
#include <cmath>
#include <stack>
#include <iomanip>
typedef long long ll;
using namespace std;
#define abs(a) (((a) > 0) ? (a) : (-(a)))
#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) > (b)) ? (b) : (a))


class Solution {
private:

public:
    void solve() {
		vector<vector<int> > matrix(3, vector<int>(3, 0));

		/*
		 * X a b
		 * c Y d
		 * e f Z
		 *
		 * */

		for (int r = 0; r < 3; r++) {
			for (int c = 0; c < 3; c++) {
				cin >> matrix[r][c];
			}
		}

		int x_plus_y = matrix[0][2] + matrix[1][2];
		int	x_plus_z = matrix[0][1] + matrix[2][1];
		int y_plus_z = matrix[1][0] + matrix[2][0];
		
		int x, y, z;

		for (x = 1; x <= 1e5; x++) {
			y = x_plus_y - x;
			z = x_plus_z - x;
			if (y > 0 && z > 0 && y + z == y_plus_z) {
				matrix[0][0] = x;
				matrix[1][1] = y;
				matrix[2][2] = z;
				break;
			}

		}

		for (int r = 0; r < 3; r++) {
			for (int c = 0; c < 3; c++) {
				cout << matrix[r][c] << " ";
			}
			cout << "\n";
		}

    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution().solve();
    return (0);
}
