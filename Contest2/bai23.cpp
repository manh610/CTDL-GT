#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector <string> res;
string s;
int n, a[15][15], vis[15][15];
int dx[]={0,-1,0,1};
int dy[]={-1,0,1,0};
string next_a="LURD";

void init() {
	cin >> n;
	for ( int i = 1; i <= n; i++) {
		for ( int j = 1; j <= n; j++) {
			cin >> a[i][j];
			vis[i][j] = 0;
		}
	}
	vis[1][1] = 1;
	res.clear();
	s.clear();
}

void Try(int i, int j, string s) {
	if ( a[i][j]==0 ) {
		return;
	}
	if ( i==n && j==n ) {
		res.push_back(s);
	}
	for(int k=0;k<4;k++){
        int x=i+dx[k];
        int y=j+dy[k];
        if(x>=1&&x<=n&&y>=1&&y<=n&&vis[x][y]==0){
            vis[x][y]=1;
            Try(x,y,s+next_a[k]);
            vis[x][y]=0;
        }
    }
}

void solve() {
	if ( a[1][1]==0 ) {
		cout << "-1" << endl;
		return;
	}
	if ( res.empty() ) {
		cout << "-1" << endl;
		return;
	}
	sort(res.begin(), res.end());
	for ( int i = 0; i < res.size(); i++) {
		cout << res[i] << " ";
	}
	cout << endl;
}

main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while ( test-- ) {
    	init();
    	Try(1,1,s);
    	solve();
	}
}

// code by Manh.


