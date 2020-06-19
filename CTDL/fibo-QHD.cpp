#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

ll F[100];
int n;

void Input() { 
    cin >> n; 
}

ll Fibo_QHD(int k) {
    F[0] = 0, F[1] = 1;
    for ( int i = 2; i <= k; i++) {
        F[i] = F[i-1] + F[i-2];
    }
    return F[k];
}

void Init() {
    for ( int i = 0; i <= n; i++) F[i] = -1;
}

ll Fibo_DQ(int j) {
    if ( j<2 ) F[j] = j;
    else if ( F[j] == -1 ) 
        F[j] = Fibo_DQ(j-1) + Fibo_DQ(j-2);
    else return F[j]; 
}

void Solve() {
    cout << Fibo_QHD(n) << endl;  
    Init();
    cout << Fibo_DQ(n) << endl;
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