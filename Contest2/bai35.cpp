#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

int n,k,s;
int ans;

void Input() {
	cin >> n >> k >> s;
	ans = 0;
}

void Try(int i, int dem, int sum) {
	if ( dem<0 || sum>s) return;
	if ( dem==0 && sum==s ) {
		ans++;
		return;
	}
	for ( int j = i+1; j<=n && (sum+j)<=s ; j++)
		Try(j,dem-1,sum+j);
}

void Solve() {
	Try(0,k,0);
	cout << ans << endl;
}

main()
{
	IOS()
//	int test; cin >> test;
	while ( 1 ) {
		Input();
		if(n==0 && k==0 && s==0 ) 
			break;
		Solve();
	}
}

// code by Manh.





