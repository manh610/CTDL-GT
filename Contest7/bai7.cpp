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
    for ( char ch : s) {
        if ( st.size()==0 ) st.push(ch);
        else if ( ch==')' ) {
            if ( st.top()=='(' && st.size()>0 ) st.pop();
            else st.push(ch);
        }
        else st.push(ch);
    }
    int tmp1 = 0, tmp2 = 0;
    while ( !st.empty() ) {
        if ( st.top()==')') tmp1++;
        else tmp2++;
        st.pop();
    }
    int res = tmp1/2 + tmp2/2 + tmp1%2 + tmp2%2;
    cout << res << '\n';
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