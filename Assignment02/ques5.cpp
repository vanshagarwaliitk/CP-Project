#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void sum ( long long int a , long long int ans){
      if(a==0){
        cout<<ans<<endl;
        return ;
      }
      ans += a;
      sum(a/2,ans);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        long long int a;
        cin>>a;
        sum(a,0);
    }
}
