/// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main() {

    int n, count = 0;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) count++;
    }
    
    cout << count << endl;
}