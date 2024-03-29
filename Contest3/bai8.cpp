#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

int n;
vector < pair<int,int> > a;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) { return (a.second < b.second); } 

void Input() {
	cin >> n;
	a.resize(n);
	for ( int i = 0; i < n; i++) {
		cin >> a[i].first;
		cin >> a[i].second;
	}
}

void Solve() {
	sort(all(a), sortbysec);
	int tmp = a[0].second;
	int res = 1;
	for ( int i = 1; i < n; i++) {
		if ( a[i].first >= tmp ) {
			res++;
			tmp = a[i].second;
		}
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





