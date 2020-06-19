#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;

int n,k;
int dp[105][50001];

void Input() {
    cin >> n >> k;
}

void Solve() {
    memset(dp,0,sizeof(dp));
    dp[0][0] = 1;
    for ( int i = 1; i <= n; i++) {
        for ( int j = 1; j <= k; j++) {
            for ( int t = 0; t <= 9; t++) {
                if ( i==1 && t==0 ) {continue;}
                if ( t <= j) {
                    dp[i][j] = ( dp[i][j]%mod + dp[i-1][j-t]%mod )%mod;
                }
            }
        }
    }
    cout << dp[n][k] << endl;
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