#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int n;
int a[105];

void Input() {
    cin >> n;
    for ( int i = 0; i < n; i++) cin >> a[i];
}

void Solve() {
    int t = 1;
    for ( int i = 0; i < n-1; i++) {
        bool check = false;
        for ( int j = 0; j < n-i-1; j++) {
            if ( a[j] > a[j+1] ) {
                swap(a[j], a[j+1]);
                check = true;
            }
        } 
        if ( !check ) return;
        cout << "Buoc " << t << ": ";
        t++;
        for ( int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
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