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
#include <iomanip>
typedef long long ll;
using namespace std;
const double PI = 3.141592653589793;

double cylinder_volume(double r, double h) {
    return (PI * r * r * h);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double d, h, v, e; cin >> d >> h >> v >> e; // drink_speed = v ml/s = v cm^3/s
    double waterarea = cylinder_volume(d / 2.0, h); // cm^3
    double rain_speed = cylinder_volume(d / 2.0, e); // cm^3 / s
    if (rain_speed >= v) {
        cout << "NO\n";
        return (0);
    }
    cout << waterarea << "\n";
    cout << v << "\n";
    cout << rain_speed << "\n";

}