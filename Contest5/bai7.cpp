#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;

int n,k;

void Input() {
    cin >> n >> k;
}

void Solve() {
    vector<int> dp(n+5,0);
    dp[0] = 1;
    for ( int i = 1; i <= n; i++) {
        for ( int j = i-1; j >= i-k && j>=0; j--) {
            dp[i] = (dp[i]+dp[j])%mod;
        }
    }
    cout << dp[n] << endl;
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