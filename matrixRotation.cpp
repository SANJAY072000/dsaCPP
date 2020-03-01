#include<bits/stdc++.h>
using namespace std;
#define tt typedef
tt long long ll;
tt vector<ll> vl;
tt vector<vl> vvl;
#define pb push_back
#define solve(t) cin>>t; while(t--)
int main(){
    ll t;solve(t){
    vl ar;
    vvl arr;
    ll n,i,j,t1,t2,a;cin>>n;
    for(i=0;i<n;arr.pb(ar),++i){
    ar.clear();
    for(j=0;j<n;cin>>a,ar.pb(a),++j);
    }
    for(i=0;i<n/2;++i){
    for(j=i;j<n-1-i;++j){
    t1=arr[j][n-1-i];
    arr[j][n-1-i]=arr[i][j];
    t2=arr[n-i-1][n-1-j];
    arr[n-i-1][n-1-j]=t1;
    t1=t2;
    t2=arr[n-1-j][i];
    arr[n-1-j][i]=t1;
    t1=t2;
    arr[i][j]=t1;
    }
    }
    for(auto x:arr){
    cout<<"\n";
    for(auto y:x){
        cout<<y<<" ";
    }
    }
    }
    
    return 0;
}


