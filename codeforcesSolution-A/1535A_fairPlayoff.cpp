/// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main() {

    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int x = max(a, b);
        int y = max(c, d);

        if ((x + y) > (a + b) && (x + y) > (c + d)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

}