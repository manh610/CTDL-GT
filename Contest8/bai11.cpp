#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;

int a,b;
int d[10005];
vector<int> prime;
vector<int> ke[10005];
bool chuaxet[10005];
int dem[10005];

void Input() {
    cin >> a >> b;
}

void Sang() {
    memset(d,0,sizeof(d));
    for ( int i = 2; i <= 100; i++) {
        if ( d[i]==0 ) {
            for ( int j = i*i; j < 10005; j+=i) {
                d[j] = 1;
            }
        }
    }
    for ( int i = 1000; i <= 9999; i++) {
        if ( d[i]==0 ) {
            prime.push_back(i);
        }
    }
}

bool check(int x, int y) {
    int dem = 0;
    while ( x && y ) {
        if ( (x%10)!=(y%10) ) dem++;
        x/=10; y/=10;
    }
    return dem==1;
}

void Init() {
    for ( int i = 0; i < prime.size()-1; i++) {
        for ( int j = i+1; j < prime.size(); j++) {
            if ( check(prime[i],prime[j]) ) {
                ke[prime[i]].push_back(prime[j]);
                ke[prime[j]].push_back(prime[i]);
            }
        }
    }
    // for(auto v : ke[prime[0]]) cout << v << ' ';
}

void Solve() {
    for ( int i = 0; i < 10005; i++) {
        chuaxet[i] = false;
        dem[i] = 0;
    }
    queue<int> q;
    q.push(a);
    chuaxet[a] = true;
    while ( q.size() ) {
        int k = q.front();
        q.pop();
        if ( k==b ) {
            cout << dem[k] << endl; 
            return;
        }
        for ( int x : ke[k] ) {
            if ( chuaxet[x]==false ) {
                chuaxet[x] = true;
                dem[x] = dem[k] + 1;
                q.push(x);
                if ( x==b ) {
                    cout << dem[x] << endl;
                    return;
                }
            }
        }
    } 
}

int main()
{
    IOS()
    Sang();
    Init();
    int test; cin >> test;
    while ( test--) {
        Input();
        Solve();
    }
    return 0;
}

// Code by Manh.