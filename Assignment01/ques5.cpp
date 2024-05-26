#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
double Find_the_car(vector<long long >a,vector<long long >b , long long q){
           double time;
           int i =0;
           while(a[i]<=q && i<a.size()){
              i++;
           }
 
           if(a[i] == q){
            return b[i];
           }
           else if(a[i-1] == q){
            return b[i-1];
           }
           else{
               i--;
               double speed =0;
               speed =((double)(a[i+1]-a[i]))/((double)(b[i+1]-b[i]));
        
               long long distance = q-a[i];
               time = ((double)distance)/speed;
               time = (int)time;
           
               time+=b[i];
           }
        return time;
}
int main(){
    int t;
    cin>>t;
    int n,k,q;
    long long  x;
    for(int j = 0 ; j<t ; j++){
    cin>>n>>k>>q;
    vector<long long >a;
    vector<long long >b;
    a.push_back(0);
    b.push_back(0);
    for(int i = 1 ; i<=k ; i++){
           cin>>x;
           a.push_back(x);
    }
    for (int i =1 ; i<=k ; i++){
         cin>>x;
         b.push_back(x);
    }
    for(int i = 0;i<q ; i++){
        cin>>x;
        int result= Find_the_car( a, b, x);
        cout<<result<<endl;
    }
 
    }
 
}
