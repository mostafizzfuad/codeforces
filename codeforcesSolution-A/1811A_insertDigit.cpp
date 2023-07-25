/// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define llmax LLONG_MAX
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        char d;
        cin >> d;

        string s;
        cin >> s;

        int flag = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] < d) {
                s.insert(s.begin() + i, d); 
                // s.insert(kothaiInsertKorba, jakeInsertKorba);
                flag = 1;
                break;
            }
        }

        if (flag == 1) cout << s << endl;
        else cout << s << d << endl; 

    }

}