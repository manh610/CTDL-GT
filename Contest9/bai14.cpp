#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;

int V,E;
vector<int> ke[1005];
bool check[1005];

void Input() {
    cin >> V >> E;
    for ( int i = 1; i <= V; i++) {
        ke[i].clear();
    }
    for ( int i = 1; i <= E; i++) {
        int a,b;
        cin >> a >> b;
        ke[a].push_back(b);
        ke[b].push_back(a);
    }
}

void BFS(int u, int v) {
    queue<int> q;
    q.push(u);
    check[u] = false;
    while ( !q.empty() ) {
        int s = q.front();
        q.pop();
        if ( s==v) {
            cout << "YES" << endl;
            return;
        }
        for ( int i : ke[s] ) {
            if ( check[i] ) {
                q.push(i);
                check[i] = false;
            }
        }
    }
    cout << "NO" << endl;
}


void Solve() {
    int k,s,t;
    cin >> k;
    while ( k-- ) {
        cin >> s >> t;
        for ( int i = 0; i <= V; i++) check[i] = true;
        BFS(s,t);
    }
    
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