#include <bits/stdc++.h>
using namespace std;
#define tt typedef
tt long long ll;
tt vector<ll> vl;

int main() {
	// your code goes here
	int i,t;
	ll j,n,k,x,a,b,q;
	cin>>t;
	for(i=1;i<=t;++i){
	    cin>>n>>k;
	    vl v,v1,v2;
	   for(j=0;j<n;cin>>x,v.push_back(x),++j);
	   if(k<=n){
	       for(j=0;j<k;++j){
	   v[j%n]=(v[j%n])^(v[n-1-(j%n)]);
	   }
	   for(auto y:v){
	       cout<<y<<" ";
	   }
	   }
	   else{ 
	   for(v1=v,j=0;j<n;++j){
	   v1[j%n]=(v1[j%n])^(v1[n-1-(j%n)]);
	   }
	   for(v2=v1,j=0;j<n;++j){
	   v2[j%n]=(v2[j%n])^(v2[n-1-(j%n)]);
	   }
	   if(!(n%2)){
	   for(q=k;k>=0;k/=n,k%=3){
	       if(k==0){
	        for(j=0;j<q%n;++j){
	   v[j%n]=(v[j%n])^(v[n-1-(j%n)]);
	   }
	     for(auto y:v){
	       cout<<y<<" ";
	   }
	       break;
	   }
	      if(k==1){
	       for(j=0;j<q%n;++j){
	   v1[j%n]=(v1[j%n])^(v1[n-1-(j%n)]);
	   }
	      for(auto y:v1){
	       cout<<y<<" ";
	   }
	       break;
	   }
	    if(k==2){
	     for(j=0;j<q%n;++j){
	   v2[j%n]=(v2[j%n])^(v2[n-1-(j%n)]);
	   }
	     for(auto y:v2){
	       cout<<y<<" ";
	   }
	       break;
	   }
	   }
	   }
	   else{
	    
	   for(q=k;k>=0;k/=n,k%=3){
	       if(k==0){
	        for(j=0;j<q%n;++j){
	   v[j%n]=(v[j%n])^(v[n-1-(j%n)]);
	   }
	   v[n/2]=0;
	     for(auto y:v){
	       cout<<y<<" ";
	   }
	       break;
	   }
	      if(k==1){
	       for(j=0;j<q%n;++j){
	   v1[j%n]=(v1[j%n])^(v1[n-1-(j%n)]);
	   }
	   v1[n/2]=0;
	      for(auto y:v1){
	       cout<<y<<" ";
	   }
	       break;
	   }
	    if(k==2){
	     for(j=0;j<q%n;++j){
	   v2[j%n]=(v2[j%n])^(v2[n-1-(j%n)]);
	   }
	   v2[n/2]=0;
	     for(auto y:v2){
	       cout<<y<<" ";
	   }
	       break;
	   }
	   }   
	   }
	   } 
	}
	return 0;
}
