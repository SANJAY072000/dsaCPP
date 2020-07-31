/*

Code Contributed by code07freak

*/

#include <bits/stdc++.h>
using namespace std;

int possb(unordered_map<long long,long long> xap){
    for(auto x:xap)if((x.second)%2)return 1;
    return 0;
}


vector<long long> codekrab(long long seqsize,vector<long long> vodka3,unordered_map<long long,long long> has1,unordered_map<long long,long long> has2){
  long long idea;
  vector<long long> newarr;
  unordered_map<long long,long long> has12,has21,has;
  for(auto x:has1){
	        if(has2.count(x.first)){
	            if(has1[x.first]-has2[x.first]>0)has12[x.first]=has1[x.first]-has2[x.first];
	        }
	        else has12[x.first]=x.second;
	    }
	    for(auto x:has2){
	        if(has1.count(x.first)){
	            if(has2[x.first]-has1[x.first]>0)has21[x.first]=has2[x.first]-has1[x.first];
	        }
	        else has21[x.first]=x.second;
	    }
  for(idea=0;idea<seqsize*2;has[vodka3[idea]]=max(has12[vodka3[idea]],has21[vodka3[idea]]),++idea);
  for(auto x:has){for(idea=0;idea<(x.second)/2;newarr.push_back(x.first),++idea);}
  return newarr;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long testfreak,idea;
    
    // code07freak's test cases
    cin>>testfreak;
    
    for(idea=0;idea<testfreak;++idea){
    long long seqsize,ist,alfa,turn1,turn2,small,minsum=0;
    unordered_map<long long,long long> has1,has2,xap;
    vector<long long> vodka1,vodka2,vodka3;
    cin>>seqsize;
    for(ist=0;ist<seqsize;cin>>alfa,++has1[alfa],++xap[alfa],vodka1.push_back(alfa),vodka3.push_back(alfa),++ist);
    for(ist=0;ist<seqsize;cin>>alfa,++has2[alfa],++xap[alfa],vodka2.push_back(alfa),vodka3.push_back(alfa),++ist);
    if(possb(xap))cout<<"-1\n";
    else{
    vector<long long> vodka4=codekrab(seqsize,vodka3,has1,has2); 
    // vodka4={1,2,3,4}; 
    sort(vodka4.begin(),vodka4.end());
    turn1=*min_element(vodka1.begin(),vodka1.end());
    turn2=*min_element(vodka2.begin(),vodka2.end());
    small=min(turn1,turn2);
	minsum=0;
	for(ist=0;ist<(vodka4.size())/2;minsum+=(min(small*2,vodka4[ist])),++ist);
	cout<<minsum<<"\n";
    }
    }
	return 0;
}

// Do not copy paste this code its wrong