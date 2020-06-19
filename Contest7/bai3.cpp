#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

void Input() {
    
}

void Solve(string s) {
    stack<char>q;
    int n = s.size();
    for ( int i = 0; i<=n; i++ ) {
        if ( s[i]!= ' ' && s[i]!='\0') {
            q.push(s[i]);
        }
        else {
            while ( !q.empty() ) {
                cout << q.top();
                q.pop();
            }
            cout << " ";
        }
    }
}

int main()
{
    IOS()
    int test; cin >> test;
    cin.ignore();
    while ( test--) {
        string s;
        getline(cin,s);
        Solve(s);
        cout << endl;
    }
    return 0;
}

// Code by Manh.