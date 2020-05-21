#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

int n,k;
vector<int> a;

void Input() {
	cin >> n >> k;
	a.resize(n);
	for ( int i = 0; i < n; i++)
		cin >> a[i];
}

void Solve() {
	sort(all(a));
	int sum1, sum2;
	sum1 = sum2 = 0;
	if ( k < (n-k) ) {
		for ( int i = 0; i < k; i++) 
			sum1 += a[i];
		for ( int i = k; i < n; i++)
			sum2 += a[i];
	}
	else {
		for ( int i = n-1; i > n-1-k; i--) 
			sum1 += a[i];
		for ( int i = 0; i <= n-k-1; i++)
			sum2 += a[i];
	}
	cout << abs(sum1-sum2) << endl;
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




