/// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main() {

    int t;
    cin >> t;

    while (t--) {
        string s, c = "codeforces";
        cin >> s;

        int count = 0;
        for (int i = 0; i < 10; i++) {
            if (s[i] != c[i]) count++;
        }

        cout << count << endl;
    }
    
}