/// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main() {

    int n, petya, vasya, tonya, cnt = 0, solve = 0;
    cin >> n;

    while (n--) {
        cin >> petya >> vasya >> tonya;
        if (petya == 1) cnt++;
        if (vasya == 1) cnt++;
        if (tonya == 1) cnt++;

        if (cnt >= 2) solve++;
        cnt = 0;
    }

    cout << solve << endl;

    return 0;
}