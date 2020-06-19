#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int n, s;
vector<int> a;
int ans[100];
bool found;

void Input() {
    cin >> n >> s;
    a.resize(n);
    for ( int &i : a) cin >> i;
    for ( int i = 0; i < n; i++ ) ans[i] = 0;
    found  = false;
}

bool cmp(int i, int j) {
    return i>j;
}

void Solve() {
    sort(all(a), cmp);
    int i = 0, sum = s;
    while ( i<n ) {
        if ( a[i]<=sum ) {
            ans[i] = 1;
            sum -= a[i];
        }
        if ( sum==0 ) {
            found = true;
            break;
        }
        else i++;
    }
    if ( found ) {
        for ( int i = 0; i < n; i++ ) {
            if ( ans[i] ) cout << a[i] << " ";
        }
    }
    else cout << "-1";
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