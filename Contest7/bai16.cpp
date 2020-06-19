#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

string s;

void Input() {
    cin >> s;
}

bool isToanTu(char c) {
    if ( c=='+' || c=='-' || c=='*' || c=='/' )
        return true;
    return false;
}

void Solve() {
    stack<int> st;
    int n = s.length();
    for ( int i = 0; i < n; i++) {
        if ( isToanTu(s[i])) {
            int se = st.top(); st.pop();
            int fi = st.top(); st.pop();
            int tmp;
            if ( s[i]=='+') tmp = fi+se;
            else if ( s[i]=='-') tmp = fi-se;
            else if ( s[i]=='*') tmp = fi*se;
            else if ( s[i]=='/') tmp = fi/se;
            st.push(tmp); 
        }
        else st.push(int(s[i]-'0'));
    }
    cout << st.top() << '\n';
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