/// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main() {

    int t;
    cin >> t;

    while (t--) {
        int arr[4];
        for (int i = 0; i < 4; i++) cin >> arr[i];

        int count = 0;
        for (int i = 1; i < 4; i++) {
            if (arr[i] > arr[0]) count++; 
        }

        cout << count << endl;
    }

}