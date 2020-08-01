#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main() {
	int t,i,y;
	long long int n,a[100000],j,b[100000],c[100000],d[100001];
	scanf("%d",&t);
	for(i=1;i<=t;++i){
	    scanf("%d",&n);
	    for(j=0;j<n;cin>>a[j],++j);
	    for(j=0;j<n;cin>>b[j],++j);
	    for(j=0;j<n;d[j]=c[j]=0,j++);
        d[n]=0;
	    for(j=0;j<n;++j){
	        if(j+1-a[j]>0){
	          d[j-a[j]]++;
	          if(j+1+a[j]>n)
	          d[n]--;
	          else if(j+1+a[j]<n)
	          d[j+1+a[j]]--;
	          else d[n]--;
	        }
	        else if(j+1-a[j]<0){
	          d[0]++;
	          if(j+1+a[j]>n)
	          d[n]--;
	          else if(j+1+a[j]<n)
	          d[j+1+a[j]]--;
	          else d[n]--;
	        }
	        else{
	          d[0]++;
	          if(j+1+a[j]>n)
	          d[n]--;
	          else if(j+1+a[j]<n)
	          d[j+1+a[j]]--;
	          else d[n]--; 
	        }
	    }
	    for(j=0;j<n;++j){
	        if(j==0)c[j]=d[j];
	        else c[j]=d[j]+c[j-1];
	    }
	    sort(b,b+n);
	    sort(c,c+n);
	    for(y=j=0;j<n;++j)
	    {
	        if(b[j]!=c[j]){
	            y=1;
	            break;
	        }
	            
	    }
	    if(y)printf("NO\n");
	    else printf("YES\n");
	}
	return 0;
}
