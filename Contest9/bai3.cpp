#include <bits/stdc++.h>
using namespace std;

int n;
int c[1005][1005];

void input() {
    cin >> n;
    for ( int i = 1; i <= n; i++) {
        for ( int j = 1; j <= n; j++) 
            cin >> c[i][j];
    }
}

void solve() {
	vector < int > *a;
	a = new vector <int> [n+1];
	for ( int i = 1; i <= n; i++) {
        for ( int j = 1; j <= n; j++) {
            if ( c[i][j]==1 ) {
                a[i].push_back(j);
            }
        }
    }
	for ( int u = 1; u<=n; u++) {
		for ( int v = 0; v<a[u].size(); v++) {
            cout << a[u][v] << " ";
		}
		cout << endl;
	}
}

main ()
{
	int test=1;
	while ( test-- ) {
        input();
		solve();
	}

}

// code by Manh.


