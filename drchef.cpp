/*

Code Contributed by code07freak

*/

#include <bits/stdc++.h>
using namespace std;


long long getanswerdays(double cures,vector<long long> origpop){
    vector<long long> newarr;
    long long answerdays=0;
    sort(origpop.begin(),origpop.end());
    for(auto x:origpop){
        if(x<cures/2)++answerdays;
        else newarr.push_back(x);
    }
    for(auto x:newarr){
        for(;cures<x;cures*=2,++answerdays);
        ++answerdays;
        cures=x*2;
    }
    return answerdays;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long testfreak,idea;
    
    // code07freak's test cases
    cin>>testfreak;
    
    for(idea=0;idea<testfreak;++idea){
    long long nonations,ist,alfa;
    double cures;
    vector<long long> origpop,newpop;
    cin>>nonations>>cures;
    for(ist=0;ist<nonations;cin>>alfa,origpop.push_back(alfa),++ist);
    cout<<getanswerdays(cures,origpop)<<"\n";
    
    }
	return 0;
}

// Do not copy paste this code its wrong