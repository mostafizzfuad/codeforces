/// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main() {

    int k, n, w;
    cin >> k >> n >> w;

    int sum = 0;
    for (int i = 1; i <= w; i++) {
        sum += i;
    }

    int d = (k * sum) - n;

    if (d < 0) cout << "0" << endl;
    else cout << d << endl;

}