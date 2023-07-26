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
        int n, k;
        cin >> n >> k;

        string s[n];
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        int ans = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] == s[0]) ans++;
        }

        cout << ans << endl;
    }

}