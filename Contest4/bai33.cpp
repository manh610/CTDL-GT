#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
const ll mod = 1e9+7;

ll n;

void Input() {
	cin >> n;
}

ll dao(ll a) {
	ll ans = 0, du;
	while ( a>0 ) {
		du = a%10;
		ans = ans*10+du;
		a/=10;
	}
	return ans;
}

ll power(ll a, ll b) {
	if ( b==1 ) return a%mod;
	ll x = power(a,b/2);
	x = x*x%mod;
	if ( b%2 ) 
		return x*a%mod;
	else
		return x;
}

void Solve() {
	ll r = dao(n);
	cout << power(n,r) << endl;
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





