#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while ( test-- ) {
    	string s, ans;
    	cin >> s;
    	int len = s.size();
    	ans.resize(len);
    	ans[0] = s[0];
    	for ( int i = 1; i < len; i++) {
    		if ( s[i-1]==s[i] ) ans[i] = '0';
    		else ans[i]='1';
		}
		cout << ans << endl;
	}
}

// code by Manh.


