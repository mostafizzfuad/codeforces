/// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int odd = 0, even = 0;
        n *= 2;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 0) even++;
            else odd++;
        }
        if (even == odd) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
}