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

        vector <ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll ans = llmax;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[i-1]) {
                ans = 0;
                break;
            }
            ans = min(ans, ((a[i] - a[i-1]) / 2LL) + 1LL); 
            // formula = ((r - l) / 2) + 1 [when, r decrease by 1 and l increase by 1]
        }
        cout << ans << endl;
    }

}