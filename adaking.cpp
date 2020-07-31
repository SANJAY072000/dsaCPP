/*

Code Contributed by code07freak

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long testfreak,idea,joker,king,nocells;
    vector<long long> vodka;
    
    // code07freak's test cases
    cin>>testfreak;
    
    for(idea=0;idea<testfreak;++idea){
        
        // total number of cells
        cin>>nocells;
        vodka.push_back(nocells);
    }
    
    for(idea=0;idea<vodka.size();++idea){
        cout<<"O";
        --vodka[idea];
        for(joker=0;joker<7;++joker){
            if(vodka[idea]<=0)cout<<"X";
            else{
                cout<<".";
                --vodka[idea];
            }
        }
        cout<<endl;
        for(joker=0;joker<7;++joker){
            for(king=0;king<8;++king){
            if(vodka[idea]<=0)cout<<"X";
            else{
                cout<<".";
                --vodka[idea];
            }   
            }
            cout<<endl;
        }
        cout<<endl;
    }
	return 0;
}

// Do not copy paste this code its wrong