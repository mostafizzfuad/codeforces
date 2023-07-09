/// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main() {

    int n, ans = 0;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        if (s[0] == '+' && s[1] == '+') ans++; 
        else if (s[0] == '-' && s[1] == '-') ans--;
        else if (s[1] == '+' && s[2] == '+') ans++;
        else ans--;
    }

    cout << ans << endl;

    return 0;
}