/// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main() {

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        if (n % 3 == 0) cout << (n / 3) << " " << (n / 3) << endl;
        else if (n % 3 == 1) cout << (n / 3) + 1 << " " << (n / 3) << endl;
        else cout << (n / 3) << " " << (n / 3) + 1 << endl; 
    }
    
}