/*

Code Contributed by code07freak

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long testfreak,idea;
    
    // code07freak's test cases
    cin>>testfreak;
    
    for(idea=0;idea<testfreak;++idea){
    long long abcissa,ordinate,norectangles,ist,px,py;
    
    // total number of rectangles
    cin>>norectangles;
    cin>>abcissa>>ordinate;
    for(px=abcissa,py=ordinate,ist=0;ist<4*norectangles-2;++ist){
    cin>>abcissa>>ordinate;px^=abcissa;py^=ordinate;
    }
    cout<<px<<" "<<py;
    cout<<"\n";
    }
	return 0;
}

// Do not copy paste this code its wrong