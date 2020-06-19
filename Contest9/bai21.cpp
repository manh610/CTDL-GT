#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;

int V,E;
vector<int> ke[1005];
bool check[1005];
vector<pair<int,int>> ans;
vector<pair<int,int>> tmp;

void Input() {
    cin >> V >> E;
    for ( int i = 1; i <= V; i++) {
        ke[i].clear();
    }
    ans.clear();
    tmp.clear();
    int a,b;
    for ( int i = 1; i <= E; i++) {
        cin >> a >> b;
        tmp.push_back({a,b});
        ke[a].push_back(b);
        ke[b].push_back(a);
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
            if ( check[i] ) {
                check[i] = false;
                st.push(s);
                st.push(i);
                break;
            }
        }
    }
}

int TPLT() {
    int res = 0;
    memset(check,true,sizeof(check));
    for ( int i = 1; i <= V; i++) {
        if ( check[i] ) {
            res++;
            DFS(i);
        }
    }
    return res;
}

void Solve() {
    int res = TPLT();
    for ( int i = 0; i < E; i++) {
        for ( int i = 1; i <= V; i++) {
            ke[i].clear();
        }
        for ( int j = 0; j < E; j++) {
            if ( j!=i ) {
               ke[tmp[j].first].push_back(tmp[j].second);
               ke[tmp[j].second].push_back(tmp[j].first);
            }
        }
        int dem = TPLT();
        if ( dem > res) {
            ans.push_back({tmp[i].first,tmp[i].second});
        }
    } 
    sort(all(ans));
    for ( pair<int,int> t : ans ) {
        cout << t.first << " " << t.second << " ";
    }
    cout << endl;
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