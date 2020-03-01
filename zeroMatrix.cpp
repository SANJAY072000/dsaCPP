#include<bits/stdc++.h>
using namespace std;
#define tt typedef
tt long long ll;
tt vector<ll> vl;
tt vector<vl> vvl;
tt unordered_set<ll> sl;
#define pb push_back
#define ins insert
#define fi find
#define solve(t) cin>>t; while(t--)
int main(){
    ll t;solve(t){
    vl ar;
    vvl arr;
    sl sr,sc;
    ll n,i,j,m,a;cin>>m>>n;
    for(i=0;i<m;arr.pb(ar),++i){
    ar.clear();
    for(j=0;j<n;++j){
    cin>>a;if(!a){
    sr.ins(i);sc.ins(j);
    }ar.pb(a);
    }
    }
    for(i=0;i<m;++i){
    if(sr.fi(i)!=sr.end()){
    fill(arr[i].begin(),arr[i].end(),0);continue;
    }
    for(j=0;j<n;++j){
    if(sc.find(j)!=sc.end())arr[i][j]=0;
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








