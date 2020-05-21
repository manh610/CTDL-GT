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
    for ( int &i : a) cin >> i;
}

void Solve() {
    vector<int> b;
    int check[100005];
    memset(check,0,sizeof(check));
    for ( int i = 0; i < n; i++) {
        if ( check[a[i]]==0 ) {
            check[a[i]]=1;
            b.push_back(a[i]);
        }
    }
    if ( b.size() < 2 ) cout << -1 << endl;
    else {
        sort(all(b));
        cout << b[0] << " " << b[1] << endl;
    }
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