/// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main() {

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            int n;
            cin >> n;

            if (n == 1) {
                cout << abs(i - 3) + abs(j - 3) << endl;
                break;
            }
        }
    }

    return 0;
}