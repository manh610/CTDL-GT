#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;

vector<int> ke[1005];
int V,E,u;
bool check[1005];

void Input() {
    cin >> V >> E >> u;
    for ( int i = 1; i <= V; i++) ke[i].clear();
    for ( int i = 1; i <= E; i++) {
        int t,s;
        cin >> t >> s;
        ke[t].push_back(s);
        ke[s].push_back(t);
    }
}

void BFS(int u) {
    queue<int> q;
    q.push(u);
    check[u] = false;
    while ( !q.empty() ) {
        int s = q.front();
        q.pop();
        cout << s << " ";
        for ( int i : ke[s] ) {
            if ( check[i] ) {
                q.push(i);
                check[i] = false;
            }
        }
    }
    cout << endl;
}

void Solve() {
    for ( int i = 1; i <= V; i++) check[i] = true;
    BFS(u);
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