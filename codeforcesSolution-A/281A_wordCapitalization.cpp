/// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main() {

    string s;
    cin >> s;

    if (islower(s[0])) {
        s[0] = toupper(s[0]);
    }

    cout << s << endl;
    
    return 0;
}