#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int n, k;
vector <int> a;
vector < vector <int> > res;

void init() {
	cin >> n >> k;
	a.resize(n);
	res.clear();
	for ( int i = 0; i<n; i++) {
		cin >> a[i];
	}
}

void Try(int i, int S, vector<int> tmp) {
	if ( S==k ) {
		res.push_back(tmp);
		return;
	}
	int j = i+1;
	while ( j<n && (S+a[j])<=k ) {
		tmp.push_back(a[j]);
		Try(j,S+a[j],tmp);
		tmp.pop_back();
		j++;
	}
}

void solve() {
	sort(a.begin(), a.end());
	vector<int> tmp;
	Try(-1,0,tmp);
	if (res.empty()) {
		cout << "-1" << endl;
		return;
	}
	for ( int i = 0; i < res.size(); i++) {
		cout << "[";
		int l = res[i].size();
		for ( int j = 0; j < l; j++) {
			(j==l-1)?cout<<res[i][j]<<"]":cout <<res[i][j]<<" ";
		}	
		cout << " ";
	}
	cout << endl;
}

main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while ( test-- ) {
    	init();
    	solve();
	}
}

// code by Manh.


