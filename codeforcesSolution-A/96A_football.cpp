/// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main() {

    int countZero = 0, countOne = 0, flag = 0;

    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
            countOne++;
            countZero = 0;
        } else {
            countZero++;
            countOne = 0;
        }

        if (countOne == 7 || countZero == 7) flag = 1;
    }

    if (flag == 1) cout << "YES" << endl;
    else cout << "NO" << endl;

}