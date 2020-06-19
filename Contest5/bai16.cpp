#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;

int n;
int a[1005];
int dp[1005];

void Input() {
    cin >> n;
    for ( int  i = 1; i <= n; i++) cin >> a[i];
}

void Solve() {
    int res = 0;
    for ( int i = 1; i <= n; i++) {
        dp[i] = a[i];
        for ( int j = 1; j < i; j++) {
            if ( a[j] < a[i] ) dp[i] = max(dp[i],dp[j]+a[i]);
        }
        res = max(res,dp[i]);
    }
    cout << res << endl;
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