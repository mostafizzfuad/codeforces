/// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define llmax LLONG_MAX
int main() {

    int t;
    cin >> t;

    while (t--) {
        int b, c, h;
        cin >> b >> c >> h;

        if (c + h >= b) cout << ((2 * b) - 1) << endl;
        else cout << (2 * (h + c) + 1) << endl;
    }

}