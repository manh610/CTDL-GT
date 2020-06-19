#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int n;
vector<int> a;
vector<bool> check;

void Input() {
    cin >> n;
    a.resize(n);
    check.resize(n);
    for ( int &i:a) cin >> i;
}
void Solve() {
    int res = n, mid = n/2;
    sort(all(a));
    for ( int  i = 0; i<n/2 && mid<n; i++) {
        while ( mid < n) {
            if ( 2*a[i]<a[mid] ) {
                res--;
                mid++;
                break;
            }
            else mid++;
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