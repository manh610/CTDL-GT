#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;

int V,E,u;
vector<int> ke[1005];
bool check[1005];

void Input() {
    cin >> V >> E >> u;
    for ( int i = 1; i <= V; i++) {
        ke[i].clear();
    }
    for ( int i = 1; i <= E; i++) {
        int t,s;
        cin >> t >> s;
        ke[t].push_back(s);
    }
}

void DFS(int u) {
    stack<int> st;
    st.push(u);
    cout << u << " ";
    check[u] = false;
    while ( !st.empty() ) {
        int s = st.top();
        st.pop();
        for ( int i : ke[s] ) {
            if ( check[i]==true ) {
                cout << i << " ";
                st.push(s);
                st.push(i);
                check[i] = false;
                break;
            }
        }
    }
    cout << endl;
}

void Solve() {
    for ( int i = 0; i <= V; i++) check[i] = true;
    DFS(u);
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