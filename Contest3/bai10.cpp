#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

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
		res += first + second;
		pq.push(first+second);
	}
	pq.pop();
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





