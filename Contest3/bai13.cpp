#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long int ll;

int k;
string s;

void Input() {
    cin >> k >> s;
}

void Solve() {
    int d[300] = {0};
    int Max = 0;
    for ( int i = 0; i < s.size(); i++) {
        d[s[i]]++;
        if ( Max < d[s[i]] ) 
            Max = d[s[i]];
    }
    if ( (Max-1)*(k-1) > s.size()-Max ) cout << -1;
    else cout << 1;
    cout << endl;
}

int main()
{
    int test; cin >> test;
    while ( test-- ) {
        Input();
        Solve();
    }
    return 0;
}