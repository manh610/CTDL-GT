#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

vector<int> a;
int n;

void Input() {
	cin >> n;
	a.resize(n);
	for ( int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void Solve() {
	sort(all(a));
	ll num1, num2, i;
	if ( n%2==0 ) {
		i = num1 = num2 = 0;	
	} 
	else {
		num1 = a[0];
		num2 = 0;
		i = 1;
	} 
	int dem = 1;
	for ( i; i< n; i++, dem++) {
		if ( dem%2 )
			num1 = num1*10 + a[i];
		else 
			num2 = num2*10 + a[i];
	}
	cout << num1+num2 << endl;
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




