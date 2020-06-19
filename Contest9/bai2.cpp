#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;

void Solve() {
    vector<int> ke[100];
    int n;
    string s;
    cin >> n;
    cin.ignore();
    for ( int i = 1; i <= n; i++) {
        getline(cin,s);
        s+=" ";
        int j = 0, tmp = 0;
        while ( j < s.size() ) {
            if ( s[j]>='0' && s[j] <= '9') {
                tmp = tmp*10 + int(s[j]-'0');
            }
            else if ( tmp > 0 ) {
                ke[i].push_back(tmp);
                tmp = 0;
            }
            j++;
        }
    }
    for ( int i = 1; i <= n; i++) {
        for ( int j = 0 ;j < ke[i].size(); j++) {
            if ( i < ke[i][j] ) {
                cout << i << " " << ke[i][j] << endl;
            }
        }
    }
}

int main()
{
    IOS()
    int test=1;
    while ( test--) {
        Solve();
    }
    return 0;
}

// Code by Manh.