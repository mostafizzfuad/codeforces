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

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr , arr + n);

        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            ans += arr[i + 1] - arr[i];
        }

        cout << ans << endl;
    }

}