#include <bits/stdc++.h>
using namespace std;
#define tt typedef
tt long long ll;
tt unordered_map<char,ll> mp;
tt string str;
#define solve(t) cin>>t;while(t--)
int main()
{
    ll t;
    solve(t){
    str s1,s2;
    char ch;
    ll i,j,count=0;
    mp m,md;
    cin>>s1>>s2;
    if(s1.size()<s2.size()){
    if(s2.size()-s1.size()>1){cout<<"False\n";}
    else if(s2.size()-s1.size()==1){
    for(i=0;i<s1.size();m[s1[i]]=i,++i);
    for(i=0;i<s2.size();++i){
    if(!m.count(s2[i])){++count;md[s2[i]]=i;ch=s2[i];}
    }
    if(count==1){
    for(j=i=0;i<s1.size()&&j<s2.size();){
    if(md[ch]==j){
        ++j;
    }
    else if(s1[i]==s2[j]){
      ++i;
        ++j; 
    }
     else {++count;++i;
        ++j;}
    }
    if(count>1)cout<<"False\n";
    else cout<<"True\n";
    }
    else cout<<"False\n";
    }}
    else if(s1.size()>s2.size()){
    if(s1.size()-s2.size()>1){cout<<"False\n";}
    else if(s1.size()-s2.size()==1){
    for(i=0;i<s2.size();m[s2[i]]=i,++i);
    for(i=0;i<s1.size();++i){
    if(!m.count(s1[i])){++count;md[s1[i]]=i;ch=s1[i];}
    }
    if(count==1){
    for(j=i=0;i<s1.size()&&j<s2.size();){
    if(md[ch]==i){
        ++i;
    }
    else if(s1[i]==s2[j]){
      ++i;
        ++j; 
    }
     else {++count;++i;
        ++j;}
    }
    if(count>1)cout<<"False\n";
    else cout<<"True\n";
    }
    else cout<<"False\n";
    }}
    else{
    for(i=0;i<s1.size();++i){
        if(s1[i]!=s2[i])++count;
    }
    if(count>1)cout<<"False\n";
    else cout<<"True\n";
    }
    }
    return 0;
}
