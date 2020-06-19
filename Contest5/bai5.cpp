#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int n,k;

void Input() {
    cin >> n >> k;
}

void Solve() {
    int a[1001][1001];
    for ( int i = 0; i <= k; i++) {
        for ( int j = 0; j <= n; j++) {
            if ( i==0 || i==j ) a[i][j] = 1;
            else a[i][j] = a[i][j-1] + a[i-1][j-1];
        }
    }
    cout << a[k][n] << endl;
}

int main()
{
    IOS()
    int test; cin >> test;
    while ( test--) {
        Input();
        Solve();
    }
    return 0;
}

// Code by Manh.