#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;

char s,t;
vector<int> ke[1005];
bool check[1005];
int truoc[1005];
int a[][10] = {
				{0,0,0,0,0,0,0,0,0,0},
				{0,0,1,0,0,0,0,0,0,0},
				{0,1,0,1,0,0,1,0,0,0},
				{0,0,1,0,1,0,0,0,0,0},
				{0,0,0,1,0,1,0,0,1,0},
				{0,0,0,0,1,0,0,0,0,0},
				{0,0,1,0,0,0,0,1,0,0},
				{0,0,0,0,0,0,1,0,1,0},
				{0,0,0,0,1,0,0,1,0,1},
				{0,0,0,0,0,0,0,0,1,0}
			};

void Input() {
    cin >> s >> t;
    for ( int i = 1; i <= 9; i++) {
        ke[i].clear();
    }
    for ( int i = 1; i <= 9; i++) {
		for ( int j = 1; j <= 9; j++) {
			if ( a[i][j]==1 ) {
				ke[i].push_back(j);				
			}
		}
	}
}

void BFS(int u) {
    queue<int> q;
    q.push(u);
    check[u] = false;
    while ( !q.empty() ) {
        int s = q.front();
        q.pop();
        for ( int i : ke[s] ) {
            if ( check[i] ) {
                q.push(i);
                check[i] = false;
                truoc[i] = s;
            }
        }
    }
}

void way(char a, char b) {
	int s = a-64;
	if ( a=='Y' ) s = 9;
	int t = b-64;
	if ( t>9 ) t = 9;
    BFS(s);
    vector<int> ans;
    ans.push_back(t);
    int k = truoc[t];
    while ( k!=s ) {
        ans.push_back(k);
        k = truoc[k];
    }
    ans.push_back(s);
    reverse(all(ans));
    for ( int i = 0; i < ans.size()-1; i++) {
    	if ( ans[i]==9 ) cout << "Y => ";
    	else {
    		char tmp = ans[i]+64;
    		cout << tmp << " => ";	
		} 
	} 
	if ( ans[ans.size()-1]==9 ) cout << "Y";
	else {
		char tmp = ans[ans.size()-1]+64;
    	cout << tmp;
	}
    cout << endl;
}

void Solve() {
    for ( int i = 1; i <= 9; i++) check[i] = true;
    for ( int i = 1; i <= 9; i++) truoc[i] = 0;
    if ( s==t ) cout << s << " => " << t << endl;
	else way(s,t);
}

int main()
{
    IOS()
    int test; cin >> test;
    while ( test--) {
        Input();
        Solve();
    }
    return 0;
}

// Code by Manh.
