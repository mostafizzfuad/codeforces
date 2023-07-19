/// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main() {

    int upper = 0, lower = 0;
    string s;
    cin >> s;

    // count upper and lower
    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) upper++;
        else lower++;
    }

    if (lower >= upper) {
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
    } else {
        for (int i = 0; i < s.length(); i++) {
            s[i] = toupper(s[i]);
        }
    }

    cout << s << endl;

}