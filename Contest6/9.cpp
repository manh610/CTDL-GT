#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int n,k;
vector<int> a;

void Input() {
    cin >> n >> k;
    a.resize(n);
    for ( int &i : a) cin >> i;
}

void Solve() {
    int dem = 0;
    for ( int i = 0; i < n-1; i++) {
        for ( int j = i+1; j < n; j++) {
            if ( a[i]+a[j]==k ) dem++;
        }
    }
    cout << dem << endl;
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