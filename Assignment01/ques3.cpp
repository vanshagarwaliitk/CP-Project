#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    double n,k;
    while(t--){
        cin>>n>>k;
        long long f = ceil(n/k);
        k=k*f;
        int res = ceil(k/n);
        cout<<res<<endl;
    }
}
