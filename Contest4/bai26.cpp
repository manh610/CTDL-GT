#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int k;
string a,b;

void Input() {
    cin >> k;
    cin >> a >> b;
}

void Solve() {
    while ( a.size() < b.size() ) a = "0" + a;
    while ( b.size() < a.size() ) b = "0" + b;
    string res = "";
    int nho = 0;
    int n = a.size();
    for ( int i = n-1; i >= 0; i--) {
        int tmp = int(a[i] -'0') + int(b[i] - '0') + nho;
        res = char(tmp%k + '0') + res;
        nho = tmp/k;
    }
    if ( nho > 0 ) res = char(nho+'0') + res;
    cout << res;
}

int main()
{
    IOS()
    int test; cin >> test;
    while ( test-- ) {
        Input();
        Solve();
    }
    return 0;
}

// Code by Manh.