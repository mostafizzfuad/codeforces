/// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main() {

    string s, ss = "";
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '+') {
            ss += s[i];
        }
    }

    sort (ss.begin(), ss.end());

    cout << ss[0];
    for (int i = 1; i < ss.length(); i++) {
        cout << '+' << ss[i];
    }
    cout << endl;

    return 0;
}