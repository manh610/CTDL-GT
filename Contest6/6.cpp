#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int n;
vector<int> a;

void Input() {
    cin >> n;
    a.resize(n);
    for ( int i = 0; i < n; i++) cin >> a[i];
}

void Solve() {
    int dem0 = 0, dem1 = 0, dem2 = 0;
    for ( int i = 0; i < n; i++) {
        if ( a[i]==0 ) dem0++;
        else if ( a[i]==1 ) dem1++;
        else dem2++;
    }
    while ( dem0-- ) cout << 0 << " ";
    while ( dem1-- ) cout << 1 << " ";
    while ( dem2-- ) cout << 2 << " ";
    cout << endl;

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