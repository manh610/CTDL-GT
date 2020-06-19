#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

vector<int> a;
int n;

void Input() {
    cin >> n;
    a.resize(n);
    for ( int &i:a ) cin >> i;
}

void Solve() {
    int res = 1;
    int t[10005];
    for ( int i = 0; i < n; i++) {
        t[i] = 1;
        for ( int j = 0; j < i; j++) {
            if ( a[j]<a[i] ) t[i] = max(t[i],t[j]+1);
        }
        res = max(res,t[i]);
    }
    cout << res;
}

int main()
{
    IOS()
    int test=1;
    while ( test--) {
        Input();
        Solve();
    }
    return 0;
}

// Code by Manh.