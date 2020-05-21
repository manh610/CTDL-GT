#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int S,D;

void Input() {
    cin >> S >> D;
}

void Solve() {
    stack<int> st;
    while ( S>0 ) {
        D--;
        if ( S>9 ) {
            st.push(9);
            S-=9;
        }
        else {
            st.push(S);
            break;
        }
    }
    if ( D<0 ) cout << -1;
    else {
        if ( D>0 ) {
            int so = st.top(); st.pop();
            st.push(so-1);
            while ( D>1 ) {
                st.push(0);
                D--;
            }
            st.push(1);
        }
        while ( !st.empty() ) {
            cout << st.top();
            st.pop();
        }
    }
    cout << endl;
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