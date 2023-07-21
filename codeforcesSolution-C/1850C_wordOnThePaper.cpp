/// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main() {

    int t;
    cin >> t;

    while (t--) {
        char ch;
        string s;

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> ch;
                if (ch != '.') s += ch;
            }
        }
        cout << s << endl;
    }

}