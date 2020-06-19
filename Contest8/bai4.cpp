#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;

string s;
ll k;

void Input() {
    cin >> k;
    cin.ignore();
    cin >> s;
}

void Solve() {
    ll d[300];
    memset(d,0,sizeof(d));
    priority_queue<ll, vector<ll>, less<ll> > pq;
    for ( int i = 0; i < s.size(); i++) {
        d[s[i]]++;
    }
    for ( int i = 0; i < 300; i++) 
        if ( d[i]>0 ) pq.push(d[i]);
    while ( k > 0 && pq.size() >0   ) {
        ll top = pq.top();
        pq.pop();
        top--;
        k--;
        pq.push(top);
    }
    ll ans = 0;
    while ( pq.size()>0 ) {
        ans += pq.top()*pq.top();
        pq.pop();
    }
    cout << ans << endl;
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