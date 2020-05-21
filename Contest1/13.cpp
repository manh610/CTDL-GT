#include <bits/stdc++.h>
using namespace std;

int n,k;
string a;
vector <string> ans;

void init() {
	cin >> n >> k;
}

void Test() {
	int ok = 0;
	for ( int i = 0; i < n-k+1; i++) {
		int count = 0;
		for ( int j = i; j < i+k; j++) {
			if ( a[j]=='A' ) count++;
		}
		if ( count==k ) ok++;
	}
	if ( ok==1 ) ans.push_back(a);
}

void Try(int i ) {
	for ( char j = 'A'; j <= 'B'; j++) {
		a[i] = j;
		if ( i==n-1 ) 
			Test();
		else
			Try(i+1);
	}
}

void solve() {
	a.resize(n);
	Try(0);
	cout << ans.size() << endl;
	for ( int i = 0; i < ans.size(); i++) {
		cout << ans[i] << endl;
	}
}

main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	init();
	solve();
}

// code by Manh.


