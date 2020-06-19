#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;

int V,E,s,t;
vector<int> ke[1005];
bool check[1005];
int truoc[1005];

void Input() {
    cin >> V >> E >> s >> t;
    for ( int i = 1; i <= V; i++) {
        ke[i].clear();
    }
    for ( int i = 1; i <= E; i++) {
        int a,b;
        cin >> a >> b;
        ke[a].push_back(b);
    }
}

void DFS(int u) {
    stack<int> st;
    st.push(u);
    check[u] = false;
    while ( !st.empty() ) {
        int s = st.top();
        st.pop();
        for ( int i : ke[s] ) {
            if ( check[i]==true ) {
                st.push(s);
                st.push(i);
                check[i] = false;
                truoc[i] = s;
                break;
            }
        }
    }
}

void way(int s, int t) {
    DFS(s);
    if ( truoc[t]==0 ) {
        cout << -1 << endl;
        return;
    }
    vector<int> ans;
    ans.push_back(t);
    int k = truoc[t];
    while ( k!=s ) {
        ans.push_back(k);
        k = truoc[k];
    }
    ans.push_back(s);
    reverse(all(ans));
    for ( int i : ans) cout << i << " ";
    cout << endl;
}

void Solve() {
    for ( int i = 0; i <= V; i++) check[i] = true;
    memset(truoc,0,sizeof(truoc));
    way(s,t);
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