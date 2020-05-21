#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
const int M = 1e9+7;

vector<int> a;
int res,n;

void Input() {
	cin >> n;
	a.resize(n);
	for ( int i = 0; i<n; i++) {
		cin >> a[i];
	}
	res = 0;
}

void Solve() {
	sort(all(a));
	for ( int i = 1; i<n; i++) {
		res = (res+i*a[i]%M)%M;
	}
	cout << res << endl;
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




