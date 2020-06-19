#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin >> t;
	queue <int> p;
	string s;
	int x;
	while(t--){
		cin >> s;
		if(s[1] == 'U'){
			cin >> x;
			p.push(x);
		}
		else if(s[1] == 'O'){
			int k = p.size();
			if(k>0)
				p.pop();
		}
		else{
			int k = p.size();
			if(k>0){
				cout<<p.front()<<endl;
			}
			else
				cout<<"NONE"<<endl;
		}
	}
}
