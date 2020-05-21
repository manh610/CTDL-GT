#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int n,x;
vector<int> a;

void Input() {
    cin >> n >> x;
    a.resize(n);
    for ( int &i :  a) cin >> i;
}

void Solve() {
    int ans = 0;
    for ( int i = 0; i < n; i++) {
        if ( a[i]==x ) ans++;
        if ( a[i]!=x && ans!=0 ) break;
    }
    if ( ans==0 ) cout << -1 << endl;
    else cout << ans << endl;
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