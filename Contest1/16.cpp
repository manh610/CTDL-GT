#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long int ll;

int n,k;
int matrix[15][15];
vector <int> a;
bool chuaxet[15];
vector< vector<int> > res;
void Input() {
	cin >> n >> k;
	for ( int i = 1; i <= n; i++ ) {
		for ( int j = 1; j <= n; j++) {
			cin >> matrix[i][j];
		}
	}
	a.resize(n);
	for ( int i = 1; i <= n; i++) 
		chuaxet[i] = true;
}

void Test() {
	int tmp = 1, S = 0;
	for ( int i = 0; i < n; i++) {
		S += matrix[tmp][a[i]];
		tmp++;
	}
	if ( S==k ) res.push_back(a);
}

void Try(int i) {
	for ( int j = 1; j <= n; j++) {
		if ( chuaxet[j] ) {
			a[i] = j;
			chuaxet[j] = false;
			if ( i==n-1 ) 
				Test();
			else
				Try(i+1);
			chuaxet[j] = true;
		}
	}
}

void Solve() {
	Try(0);
	cout << res.size() << endl;
	for ( int i = 0; i < res.size(); i++) {
		for ( int j = 0; j <= n-1; j++) {
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
}

main()
{
	IOS()
	Input();
	Solve();
}

// code by Manh.


