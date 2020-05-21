#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;
typedef long long ll;
int n;
int S;
int a[35];
int res = 99999;
 
void Try(int i , ll sum , int d){
	if (sum>S || d>res) return;	
	if(i==n){
		if (sum == S) res = min(res,d);
		return;
	}
	Try(i+1,sum,d);
	Try(i+1,sum+a[i],d+1);
}

main(){
	IOS()
	cin >> n >> S;
	for(int i=0;i<n;i++) cin>>a[i];
	Try(0,0,0);
	if (res==99999) 
		cout<<-1;
	else 
		cout<<res;
}

// code by Manh.
