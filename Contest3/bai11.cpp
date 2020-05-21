#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
const ll mod = 1e9+7;

vector<int> a;
int n;
priority_queue<ll, vector<ll>, greater<ll> > pq;

void Input() {
	cin >> n;
	a.resize(n);
	for ( int i = 0; i < n; i++) 
		cin >> a[i];
}

void Solve() {
	for ( int i = 0; i < n; i++) {
		pq.push(a[i]);
	}
	ll res = 0, first, second;
	while ( pq.size()>1 ) {
		first = pq.top();
		pq.pop();
		second = pq.top();
		pq.pop();
		ll tmp = (first + second)%mod;
		res += tmp;
		res %= mod;
		pq.push(tmp);
	}
	pq.pop();
	cout << res << endl;
}

main()
{
	IOS()
	// int test; cin >> test;
	// while ( test-- ) {
		Input();
		Solve();
	// }
}

// code by Manh.





