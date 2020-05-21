#include <bits/stdc++.h>
using namespace std;
 
int n,t[30];
vector < vector <int> > ans;
vector <int> x;
 
void init()
{
    cin >> n;
    x[0]=1;t[0]=0;
}
 
void output(int k)
{
	cout << "(";
    for(int i=1;i<=k;i++)
    {
        if(i==k) cout << x[i] <<")";
        else
            cout << x[i] << " ";
    }
    cout << " ";
}

void solve() {
	for ( int i = 0; i < ans.size(); i++) {
		sort(ans[i].begin(), ans[i].end());
	}
	for ( int i = 0; i < ans.size(); i++) {
		cout << "(";
		for(int j = 0; j < ans[i].size(); j++) {
			(j==ans[i].size())?(cout<<ans[i][j]<<")"):(cout<<ans[i][j]<<" ");
		}
		cout << " ";
	}
}

void tim(int i)
{
    for(int j=x[i-1];j<=(n-t[i-1]);j++)
    {
        x[i]=j;
        t[i]=t[i-1]+x[i];
        if(t[i]==n) 
			ans.push_back(x);
        else
            tim(i+1);
    }
}
main()
{
    init();
    tim(1);
    solve();
}

