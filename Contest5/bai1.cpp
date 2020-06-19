#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int F[100][100];
string s1,s2;
    
void Input() {
    cin >> s1 >> s2;
}

void Solve() {
    int res = 0;
    memset(F,0,sizeof(F));
    for ( int i = 1; i <= s1.size(); i++) {
        for ( int j = 1; j <= s2.size(); j++) {
            if ( s1[i-1]==s2[j-1] ) 
                F[i][j] = F[i-1][j-1] + 1;
            else
                F[i][j] = max(F[i-1][j], F[i][j-1]);
            res = max(res,F[i][j]); 
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