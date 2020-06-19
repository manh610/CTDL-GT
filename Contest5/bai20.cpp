#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;

string s;

void Input() {
    cin >> s;
}

ll xuly(string a) {
    ll res = 0;
    for ( int i = 0; i < a.size(); i++) {
        res = res*10 + (a[i]-'0');    
    }
    return res;
}

void Solve() {
    ll res = 0;
    int n = s.size();
    for ( int i = n; i >= 1; i--) {
        for ( int  j = 0; j <= n-i; j++) {
            string tmp = s.substr(j,i);
            res += xuly(tmp);
        }
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