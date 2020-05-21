#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

string s;

void Input() {
    cin >> s;
}

void Solve() {
    stack<char> st;
    int res = 0, tmp = 0;
    for ( int i = 0; i < s.size(); i++) {
        if ( st.empty() ) st.push(s[i]);
        else if ( st.top()=='[' && s[i]==']') {
            st.pop();
            tmp += 2;
        }
        else if ( st.top()==']' && s[i]=='[') {
            res += st.size() + tmp;
            st.pop();
        }
        else if ( s[i]=='[' ) st.push(s[i]);
        else if ( st.top()==']' && s[i]==']') st.push(s[i]);
        if(st.empty()) tmp = 0;
    }
    cout << res << endl;
}

int main()
{
    IOS()
    int test; cin >> test;
    while ( test-- ) {
        Input();
        Solve();
    }
    return 0;
}

// Code by Manh.