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

        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];

        sort (arr, arr + n);

        if (arr[0] < 0) cout << arr[0] << endl;
        else cout << arr[n - 1] << endl;
    }

}