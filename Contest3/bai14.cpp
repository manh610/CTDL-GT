#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;

ll n, res;
map<ll, bool> check;
int u[20];
vector<int> a;

void Input() {
    cin >> n;
}

void Try(int i, int n) {
    for ( int j = 0; j <= 1; j++) {
        u[i] = j;
        if ( i==n-1 ) {
            ll tmp = 0;
            for ( int k = 0; k < n; k++) {
                if ( u[k]==1 ) {
                    tmp = tmp*10+a[k];
                } 
            }
            if ( check[tmp] && tmp>0 && res<tmp ) 
                res = tmp;
        }
        else
            Try(i+1,n);
    }
}

void Solve() {
    a.clear();
    res = -1;
    while ( n > 0 ) {
        a.push_back(n%10);
        n/=10;
    }
    reverse(all(a));
    Try(0,a.size());
    cout << res << endl;
}

int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    IOS()
    for ( int i = 1; i<=1000000; i++) {
        check[i*i*i] = true;
    }
    cerr << "\nRunning is : " << 1.0*clock()/1000 ;
    int test; cin >> test;
    while (test--){
        Input();
        Solve();
    }
    cerr << "\nRunning is : " << 1.0*clock()/1000 ;
    return 0;
}

// Code by Manh.