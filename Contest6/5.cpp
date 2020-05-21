#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int n, m;
vector<int> a,b;

void Input() {
    cin >> n >> m;
    a.resize(n);
    b.resize(m);
    for ( int i = 0; i < n; i++) cin >> a[i];
    for ( int i = 0; i < m; i++) cin >> b[i];
}

void Solve() {
    sort(all(a));
    sort(all(b));
    vector<int> c;
    int i = 0, j = 0;
    while ( i<n && j<m ) {
        if ( a[i] < b[j] ) {
            cout << a[i] << " ";
            i++;
        }
        else if ( a[i] > b[j] ) {
            cout << b[j] << " ";
            j++;
        }
        else {
            cout << a[i] << " ";
            c.push_back(a[i]);
            i++; j++;
        }
    } 
    if ( i< n ) {
        for ( int t = i; t < n; t++) cout << a[t] << " ";
    }
    if ( j<m) {
        for ( int t = j; t < m; t++) cout << b[t] << " ";
    }
    cout << endl;
    for ( int k = 0; k < c.size(); k++) cout << c[k] << " ";
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