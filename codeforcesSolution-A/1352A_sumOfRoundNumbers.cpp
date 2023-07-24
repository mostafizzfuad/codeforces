/// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main() {

    int t;
    cin >> t;

    while (t--) {
        vector <int> ans;
        int n;
        cin >> n;

        int x = 1;
        while (n) {
            x *= 10;
            int p = n % x;
            if(p) ans.push_back(p);
            n -= p;
        }

        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        } cout << endl;
    }

}