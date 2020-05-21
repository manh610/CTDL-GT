#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

int n;
vector<ll> a,b;

void Input() {
	cin >> n;
	a.resize(n);
	b.resize(n);
	for ( int i = 0; i< n; i++)
		cin >> a[i];
	for ( int i= 0; i< n; i++)
		cin >> b[i];
}

bool cmp(ll a, ll b) {
	return a>b;
}

void Solve() {
	sort(all(a));
	sort(all(b),cmp);
	ll res = 0;
	for ( int i = 0; i < n; i++) {
		res += a[i]*b[i];
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




