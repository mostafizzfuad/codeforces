//// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main() {

    ll m, n, a, p, q;
    cin >> m >> n >> a;

    /// for m
    if (m % a == 0) p = m / a;
    else p = (m / a) + 1;

    /// for n
    if (n % a == 0) q = n / a;
    else q = (n / a) + 1;

    cout << p * q << endl;

    return 0;
}