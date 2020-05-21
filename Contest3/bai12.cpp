#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

string s;

void Input() {
	cin >> s;
}

void Solve() {
	sort(all(s));
	int dem = 1, ans = 0;
	int n = s.length();
	for ( int i = 1; i < n; i++ ) {
		if ( s[i]==s[i-1] ) {
			dem++;
			ans = max(ans,dem);
		}
		else 
			dem=1;
	}
	if ( ans <= n-ans && n%2==0 ) cout << 1 << endl;
	else if ( ans <= (n/2+1)&& n%2==1 ) cout << 1 << endl;
	else cout << -1 << endl;
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





