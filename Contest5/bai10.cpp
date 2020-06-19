#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;

int m,n;
int a[1000][1000];
int dp[1000][1000];

void Input() {
    cin >> m >> n;
    for ( int i = 1; i <= m; i++) {
        for ( int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
}

void Solve() {
    for ( int  i = 0; i <= m; i++ ) {
        for ( int j = 0; j <= n; j++) {
            if ( i==0 || j==0 ) dp[i][j] = INT_MAX;
            else if ( i==1 && j==1 ) dp[i][j] = a[i][j];
            else dp[i][j] = min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]) + a[i][j];
        }
    }
    cout << dp[m][n] << endl;
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