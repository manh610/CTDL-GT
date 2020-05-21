#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

int m,n;
vector< pair<int,int> > p,q;
vector< vector<pair<int,int>> > res;

void Input() {
    res.clear();
    cin >> m >> n;
    p.resize(m); q.resize(n);
    for ( int i = 0; i < m; i++) {
        cin >> p[i].first;
        p[i].second = i;
    }
    for ( int i = 0; i < n; i++) {
        cin >> q[i].first;
        q[i].second = i;
    }
}

void Solve() {
    for ( int i = 0; i < m; i++) {
        vector<pair<int,int>> tmp;
        for ( int j = 0; j < n; j++) {
            tmp.push_back({p[i].first*q[j].first,p[i].second+q[j].second});
        }
        res.push_back(tmp);
    }
    int mu = 0;
    while ( mu < n+m-1 ) {
        ll ans = 0; 
        for ( int i = 0; i < res.size(); i++) {
            for ( int j = 0; j < res[i].size(); j++) {
                if ( res[i][j].second == mu ) {
                    ans += res[i][j].first;
                }
            }
        }
        cout << ans << " ";
        mu++;
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