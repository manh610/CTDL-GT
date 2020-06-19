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
        for ( int i : ke[s] ) {
            if ( check[i] ) {
                q.push(i);
                check[i] = false;
            }
        }
    }
}

void Solve() {
    for ( int i = 0; i <= V; i++) check[i] = true;
    int res = 0;
    for ( int i = 1; i <= V; i++) {
        if ( check[i] ) {
            res++;
            BFS(i);
        }
    }
    for ( int i = 1; i <= V; i++) {
        for ( int j = 0; j <= V; j++) check[j] = true;
        check[i] = false;
        int tmp = 0;
        for ( int j = 1; j <= V; j++) {
            if ( check[j] ) {
                tmp++;
                BFS(j);
            }
        }
        if ( tmp > res) cout << i << " ";
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