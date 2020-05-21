#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int n;
int a[105];

void Input() {
    cin >> n;
    for ( int i = 1; i <= n; i++) cin >> a[i];
}

void Solve() {
    int t = 1;
    for ( int i = 1; i < n; i++) {
        bool check = false;
        for ( int j = i+1; j <= n; j++) {
            if ( a[i] > a[j] ) {
                swap(a[i],a[j]);
                check = true;
            }
        }
        if ( check ) {
            cout << "Buoc " << t << ": ";
            for ( int k = 1; k <= n; k++) cout << a[k] << " ";
            cout << endl;
            t++;
        }
    }
}

int main()
{
    IOS()
    int test = 1;
    while ( test--) {
        Input();
        Solve();
    }
    return 0;
}

// Code by Manh.