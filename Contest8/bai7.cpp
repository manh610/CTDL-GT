#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;

ll n;

void Input() {
    cin >> n;
}

void Solve() {
    vector<int> a;
    while ( n>0 ) {
        a.push_back(n%10);
        n/=10;
    }
    reverse(all(a));
    int vt = a.size();
    for ( int i = 0; i<a.size(); i++) {
        if ( a[i]>1 ) {
            vt=i; break;
        }
    }
    for ( int i = vt; i < a.size(); i++) a[i] = 1;
    ll res = 0;
    int j = 1;
    for ( int i = a.size()-1; i >=0; i--) {
        res += a[i]*j;
        j*=2;
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