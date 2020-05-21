#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long int ll;

int n, sum;
bool check;
vector <int> a;
void Input() {
	cin >> n;
	a.resize(n);
	sum = 0;
	check = false;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
}

void Try(int i, int s) {
	if ( check ) return;
	if ( s == sum/2 ) {
		check = true;
		return;
	}
	int j = i+1;
	while ( j<n && (s+a[j])<=sum/2 ) {
		Try(j,s+a[j]);
		j++;
	}
}

void Solve() {
	if ( sum%2==1 ) {
		cout << "NO";
		return;
	}
	Try(-1,0);
	if ( check ) cout << "YES";
	else cout << "NO";
}

main()
{
	IOS()
	int test;
	cin >> test;
	while ( test-- ) {
		Input();
		Solve();
		cout << endl;
	}
}

// code by Manh.



