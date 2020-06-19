#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

vector<int> a;
int n, s;

void Input() {
    cin >> n >> s;
    a.resize(n);
    for ( int &i:a ) cin >> i;
}

void Solve() {
    int f[40005] = {0};
    f[0] = 1;
    for ( int i = 0; i < n; i++) {
        f[a[i]] = 1;
        for ( int j = s; j >= a[i]; j--) {
            if ( f[j-a[i]]==1 ) f[j]=1;
        }
    }
    if ( f[s]==1) cout << "YES" << endl;
    else cout << "NO" << endl;
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