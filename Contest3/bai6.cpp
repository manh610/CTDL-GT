#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

int n;
vector <int> a;

void Input() {
	cin >> n;
	a.resize(n);
	for ( int i = 0; i < n; i++) 
		cin >> a[i];
}

bool Check() {
	vector<int> b(a);
	sort(all(b));
	for ( int i = 0; i < n; i++) {
		if ( !(a[i]==b[i]) && !(a[n-i-1]==b[i]) )
			return false;
	}
	return true;
}

void Solve() {
	if ( Check() ) 
		cout << "Yes";
	else
		cout << "No";
	cout << endl;
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




