#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;

int n;
ll dp[10005];

void Input() {
    cin >> n;
}

void UGLY() {
    int i2 = 1, i3 = 1, i5 = 1;
    dp[1] = 1;
    for ( int i = 2; i <= 10005 ; i++) {
        dp[i] = min( dp[i2]*2, min(dp[i3]*3,dp[i5]*5));
        if ( dp[i]==dp[i2]*2) i2++;
        if ( dp[i]==dp[i3]*3) i3++;
        if ( dp[i]==dp[i5]*5 ) i5++;
    }
}

void Solve() {
    cout << dp[n] << endl;
}

int main()
{
    IOS()
    UGLY();
    int test; cin >> test;
    while ( test--) {
        Input();
        Solve();
    }
    return 0;
}

// Code by Manh.