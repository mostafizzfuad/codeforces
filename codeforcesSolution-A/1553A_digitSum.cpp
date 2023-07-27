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
        int n;
        cin >> n;

        int ans = n / 10;
        if (n % 10 == 9) ans++;

        cout << ans << endl;
    }

}