/// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main() {

    string s, ss;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y') {
            continue;
        } else {
            ss += ".";
            ss += tolower(s[i]);
        }
    }

    cout << ss << endl;
    
}