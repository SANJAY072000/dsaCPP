#include<bits/stdc++.h>
using namespace std;
#define tt typedef
tt long long ll;
tt unordered_map<char,ll> mp;
tt string str;
#define solve(t) cin>>t; while(t--)
int main(){
    ll t;solve(t){
    str s,ns;
    cin>>s;
    mp m;
    ll i,j;
    for(m[s[0]]=1,j=0,i=1;i<=s.size();++i){
    if(m.count(s[i])){
    ++m[s[i]];
    }
    else if(!m.count(s[i])){
    ns[j++]=s[i-1];
    ns[j++]=(char)(m[s[i-1]]);
    m.erase(s[i-1]);
    if(i!=s.size()){
    m[s[i]]=1;
    }
    }
    }
    if(j-1<s.size()){
    // cout<<ns<<"\n";
    
    for(m[s[0]]=1,j=0,i=1;i<=s.size();++i){
    if(m.count(s[i])){
    ++m[s[i]];
    }
    else if(!m.count(s[i])){
    // ns[j++]=s[i-1];
    // ns[j++]=(char)(m[s[i-1]]);
    cout<<s[i-1]<<m[s[i-1]];
    m.erase(s[i-1]);
    m[s[i]]=1;
    }
    } 
    cout<<"\n";
    }
    else{
        cout<<s<<"\n";
    }
    }
    
    return 0;
}









