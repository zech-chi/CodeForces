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
    int s; cin >> s;

    vector<string> s1, s2, s3;
    s1.push_back("zero");
    s1.push_back("one");
    s1.push_back("tho");
    s1.push_back("three");
    s1.push_back("four");
    s1.push_back("five");
    s1.push_back("six");
    s1.push_back("seven");
    s1.push_back("eight");
    s1.push_back("nine");

    s2.push_back("ten");
    s2.push_back("eleven");
    s2.push_back("twelve");
    s2.push_back("thirteen");
    s2.push_back("fourteen");
    s2.push_back("fifteen");
    s2.push_back("sixteen");
    s2.push_back("seventeen");
    s2.push_back("eighteen");
    s2.push_back("nineteen");
    
    s3.push_back("zero");
    s3.push_back("ten");
    s3.push_back("twenty");
    s3.push_back("thirty");
    s3.push_back("forty");
    s3.push_back("fifty");
    s3.push_back("sixty");
    s3.push_back("seventy");
    s3.push_back("eighty");
    s3.push_back("ninety");


    if (s < 10) {
        cout << s1[s];
    } else if (s < 20) {
        cout << s2[s % 10];
    } else {
        cout << s3[s / 10];
        if (s % 10)
            cout << "-" << s1[s % 10];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return (0);
}

