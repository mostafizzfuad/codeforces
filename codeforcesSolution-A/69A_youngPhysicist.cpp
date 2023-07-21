/// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main() {

    int t, sumOne = 0, sumTwo = 0, sumThree = 0;
    cin >> t;

    int arr[100][100];
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
        sumOne += arr[i][0];
        sumTwo += arr[i][1];
        sumThree += arr[i][2];
    }

    if (sumOne == 0 && sumTwo == 0 && sumThree == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    
}