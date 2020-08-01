#include <bits/stdc++.h>
using namespace std;
#define tt typedef
tt long long ll;
tt vector<ll> vl;
tt unordered_set<ll> sl;
tt unordered_multiset<ll> msl;
tt unordered_map<ll,ll> ml;
#define pb push_back
#define ins insert
#define f(j,n) for(j=0;j<n;++j)

int main() {
	// your code goes here
	int t;
	ll n,x,s,j,k,i;
	cin>>t;
	while(t--){
	    vl v;
	    sl dn;
	    ml hsh;
	    msl chck;
	   cin>>n;
	   f(j,n){
	   cin>>x;v.pb(x);
	   hsh[x]=0;  
	   chck.insert(x);
	   }
	   f(j,n){
	   //for(x=k=0;k<j;++k)if(v[k]%v[j]==0)x++;
	   for(k=1;k<=sqrt(v[j]);++k){
	   if(v[j]%k==0){
	       if((v[j]/k)==k){
	           if(dn.find(k)==dn.end()){
	              if(hsh.count(k))
	              {
	              if(v[j]!=k)
	              ++hsh[k]; 
	              }
	           }
	       }
	       else {
	           if(dn.find(k)==dn.end()){
	              if(hsh.count(k)){if(v[j]!=k)++hsh[k]; }
	           }
	           if(dn.find((v[j]/k))==dn.end()){
	               if(hsh.count(v[j]/k)){if(v[j]!=(v[j]/k))++hsh[(v[j]/k)]; }
	           }
	       }
	   }   
	   }
	   chck.erase(chck.find(v[j]));
	   if(chck.find(v[j])!=chck.end())++hsh[v[j]];
	   else
	   dn.ins(v[j]);
	   }
	   s=0;
	   for(auto y:hsh){
	       s=max(s,y.second);
	   }
	   cout<<"\n"<<s;
	}
	return 0;
}
