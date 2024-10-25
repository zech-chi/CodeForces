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


void solve()
{
    string curTime; cin >> curTime;
    string sleepTime; cin >> sleepTime;
    int curHH, curMM;
    int sleepHH, sleepMM;
    int bedHH, bedMM;

    curHH = (curTime[0] - '0') * 10 + (curTime[1] - '0');
    curMM = (curTime[3] - '0') * 10 + (curTime[4] - '0');

    sleepHH = (sleepTime[0] - '0') * 10 + (sleepTime[1] - '0');
    sleepMM = (sleepTime[3] - '0') * 10 + (sleepTime[4] - '0');

    bedMM = curMM - sleepMM;
    bedHH = curHH - sleepHH;
    if (bedMM < 0) {
        bedMM += 60;
        bedHH -= 1;
    }

    if (bedHH < 0)
        bedHH += 24;


    if (bedHH < 10)
        cout << "0";
    cout << bedHH;
    cout << ":";
    
    if (bedMM < 10)
        cout << "0";
    cout << bedMM;
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

