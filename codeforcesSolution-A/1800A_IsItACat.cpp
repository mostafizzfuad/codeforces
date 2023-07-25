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

        string s, T = "meow";
        cin >> s;

        for (int i = 0; i < n; i++) {
            if (s[i] <= 90) {
                s[i] += 32;
            }
        }

        string ss = "";
        for (int i = 0; i < n; i++) {
            if (ss.empty() || ss.back() != s[i]) {
                ss.push_back(s[i]);
            }
        }

        if (ss == T) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}