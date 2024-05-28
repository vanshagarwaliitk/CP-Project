#include <bits/stdc++.h>
using namespace std;
void solve(int num){
	vector<int>v;
	stack<int>s1;
	stack<int>s2;
	for(int i = 0 ; i < num ; i ++ ){
		int x;
		cin>>x;
        v.push_back(x);
		s1.push(x);
        
	}	
	for ( int i = num -1 ; i >=0 ; i -- ){
		s2.push(v[i]);
	}
	while(!(s1.empty() || s2.empty())){
		 if(s2.top()>s1.top()){
			  cout<<"1 ";
			  s1.pop();
		 }
		 else if(s2.top()<s1.top()){
			cout<<"2 ";
			s2.pop();
		 }
		 else{
			cout<<"0 ";
			 s1.pop();
			 s2.pop();
		 }
	}
}
int main() {
	int num;
	cin >> num;  
	solve(num);
}
