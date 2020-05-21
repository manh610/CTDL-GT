#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

int dx[] = {0,-1,-1,-1,0,1,1,1};
int dy[] = {1,1,0,-1,-1,-1,0,1};
vector <string> s;
int visit[100][100];
char matrix[100][100];
vector <string> res;
int k,m,n;


void Input() {
	cin >> k >> m >> n;
	s.resize(k);
	for ( int i = 0; i < k; i++) cin >> s[i];
	for ( int i = 1; i <= m; i++) {
		for ( int j = 1; j <= n; j++) {
			visit[i][j] = 0;
			cin >> matrix[i][j];
		}
	}
	res.clear();
}

void Try(int x, int y, string tmp){
	visit[x][y] = 1;
	tmp.push_back(matrix[x][y]);
	for ( int i = 0; i < s.size(); i++) {
		if ( tmp==s[i] ) {
			res.push_back(tmp);
			return;
		}
	}
	for(int i = 0 ; i < 8 ; i++){ 
        int u = x + dx[i];
        int v = y + dy[i];
        if( u>0 && u<=n && v>0 && v<=m && visit[u][v]==0) 
            Try(u,v,tmp);
    }
    tmp.pop_back(); 
    visit[x][y] = 0;
}

void Solve() {
	string tmp = "";
	for ( int i = 1; i<=m; i++) {
		for ( int j = 1; j<=n; j++) {
			Try(i,j,tmp);
		}
	}
	if ( res.size()==0 ) cout << "-1" << endl;
	else {
		for ( int i = 0; i < res.size(); i++) {
			cout << res[i] << ' ';
		}
		cout << endl;
	}
}

main()
{
	IOS()
	int test; cin >> test;
	while ( test-- ) {
		Input();
		Solve();
	}
}

// code by Manh.





