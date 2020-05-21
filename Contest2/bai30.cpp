#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

vector <int> Prime;
vector <bool> isPrime;
vector < vector<int> > ans;
int n,p,s;

void Sang() {
	isPrime.assign(200,true);
	for ( int i = 2; i <= sqrt(200); i++ ) {
		if ( isPrime[i] ) 
			for ( int j = i*i; j <= 200; j+=i ) 
				isPrime[j] = false;
	}
	for ( int i = 2; i <= 200; i++)
		if ( isPrime[i]==true ) {
			Prime.push_back(i);
		}
}

void Input() {
	cin >> n >> p >> s;
	ans.clear();
}

void Try(int i, int k, int sum, vector<int> tmp) {
	if ( k==0 ) {
		if ( sum==s ) 
			ans.push_back(tmp);
		return;
	}
	for(int j = i+1; j<Prime.size() && sum+Prime[j]<=s; j++ ) {
		tmp.push_back(Prime[j]);
		Try(j,k-1,sum+Prime[j],tmp);
		tmp.pop_back();
	}
}

void Solve() {
	int index = lower_bound(all(Prime),p) -Prime.begin();
	vector<int> tmp;
	Try(index-1,n,0,tmp);
	cout << ans.size() << endl;
	for ( int i = 0; i < ans.size(); i++) {
		for ( int j = 0; j < ans[i].size(); j++) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
}

main()
{
	Sang();
	IOS()
	int test;
	cin >> test;
	while ( test-- ) {
		Input();
		Solve();
	}
}

// code by Manh.




