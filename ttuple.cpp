#include <bits/stdc++.h>
using namespace std;
#define tt typedef
tt long long ll;
tt double ld;
tt string str;
tt vector<ll> vl;
tt vector<vector<ll>> vvl;
tt map<char,ll> mpc;
tt map<ll,ll> mpl;
tt unordered_map<char,ll> umpc;
tt unordered_map<ll,ll> umpl;
tt set<ll> stl;
tt set<char> stc;
tt unordered_set<ll> ustl;
tt unordered_set<char> ustc;
tt deque<ll> dql;
#define mp make_pair
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define pu push
#define po pop
#define ft first
#define sd second
#define ins insert
#define ers erase
#define nlp cout<<"\n"
#define bclz __builtin_clz
#define bctz __builtin_ctz
#define bpc __builtin_popcount
#define bpry __builtin_parity
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mod 1000000007
#define solve(t) cin>>t;while(t--)
int main() {
	fast;
	ll t;solve(t){
	 ll a,b,c,p,q,r;
        cin >> a >> b >> c >> p >> q >> r;
                if(a==p && b==q && c==r){
            cout<<"0\n";
        }
        else if((p-a == q-b && q-b == r-c) ||
        (p==a && q-b==r-c)||(q==b && p-a==r-c)||(r==c && q-b==p-a) ||
        ((p==a && q==b) || (q==b && r==c) || (p==a && r==c) )||
        ((a!=0 && b!=0 && c!=0) && p%a==0 && q%b==0 && r%c==0 && p/a==q/b && q/b==r/c) ||
        (p==a && b!=0 && c!=0 && q%b==0 && r%c==0 && q/b==r/c)||(q==b && a!=0 && c!=0 && p%a==0 && r%c==0 && p/a==r/c)||(r==c && a!=0 && b!=0 && p%a==0 && q%b==0 && q/b==p/a))
        {
            cout<<"1\n";
        }
        else if(
        (p==a)||(q==b)||(r==c) ||
        
        (p-a==q-b || q-b == r-c || p-a==r-c) ||
        ((p-a)+(q-b)==(r-c) ||(p-a)+(r-c)==(q-b) || (q-b)+(r-c)==(p-a)) ||
        
        (((a!=0 && b!=0) && p/a==q/b && p%a==0 && q%b==0) ||((c!=0 && b!=0) && r/c==q/b && r%c==0 && q%b==0) ||((a!=0 && c!=0) && p/a==r/c && p%a==0 && r%c==0))||
        ((a!=0 && b!=0 && c!=0) && ((p/a) * (q/b) == (r/c) || (r/c) * (q/b) == (p/a) || (p/a) * (r/c) == (q/b)) && p%a==0 && r%c==0 && q%b==0)||
        
        ((a!=b && b!=c && a!=c) &&(a!=0 && b!=0 && c!=0) && ((p-q)%(a-b)==0) && (p*(b-c)+r*(a-b) == q*(a-c))) || 
        
        ((b!=0 && c!=0 && b!=c && (q-p+a)%b == 0)&& (p-a)*(b-c)==b*r-c*q)||
        ((a!=0 && c!=0 && a!=c && (p-q+b)%a == 0)&&(q-b)*(a-c)==a*r-c*p)||
        ((b!=0 && a!=0 && b!=a && (q-r+c)%b == 0) && (r-c)*(b-a)==b*p-a*q)||
        
        
        ((b!=0 && a!=0 && q%b==0) && (r!=c) && (-a*q+p*b)%(r-c)==0 && (((-a*q+p*b)/(r-c))==b)) ||
        ((b!=0 && a!=0 && p%a==0) && (r!=c) && (-b*p+q*a)%(r-c)==0 && (((-b*p+q*a)/(r-c))==a)) ||
        ((b!=0 && c!=0 && q%b==0) && (p!=a) && (-c*q+r*b)%(p-a)==0 && (((-c*q+r*b)/(p-a))==b)) ||
        
        ((a!=0 && c!=0 && r%c==0)&&(q!=b) && (-a*r+p*c)%(q-b)==0 && (((-a*r+p*c)/(q-b))==c)) ||
        ((b!=0 && c!=0 && r%c==0) && (p!=a) && (-b*r+q*c)%(p-a)==0 && (((-b*r+q*c)/(p-a))==c)) ||
        ((a!=0 && c!=0 && p%a==0)&&(q!=b) && (-c*p+r*a)%(q-b)==0 && (((-c*p+r*a)/(q-b))==a)) ||
        
        
        ((!(p==q&&a!=b) &&!(q==r&&b!=c) && !(p==r && a!=c) && q!=r &&(b*r-q*c)%(q-r)==0 && p!=q && ((a*q-p*b)%(p-q)==0) && (a!=b) && ((p-q)%(a-b)==0) &&p!=0 && q!=0 && r!=0 && !(a==b &&p!=q) && !(b==c&&q!=r) && !(a==c&&p!=r)) && ((a*q-p*b)*(q-r) == (b*r-q*c)*(p-q))) ||
        
        ((p!=a && b+p!=a && c+p!=a && q!=0 && r!=0) && (q%(b+p-a)==0) && (r%(c+p-a)==0) && (r*b-c*q)==(p-a)*(q-r)) ||
        ((q!=b && a+q!=b && c+q!=b && p!=0 && r!=0) && (p%(a+q-b)==0) && (r%(c+q-b)==0) && (r*a-c*p)==(q-b)*(p-r)) ||
        ((r!=c && b+r!=c && a+r!=c  && q!=0 && p!=0) && (p%(a+r-c)==0) && (q%(b+r-c)==0)&& (p*b-a*q)==(r-c)*(q-p)) ||
        
        
        ((a!=0)&&(b!=c) && (p%a==0) &&(a*(q-r)%(b-c))==0 && ((a*(q-r))/(b-c)==p)) ||
        ((b!=0)&&(a!=c) && (q%b==0) &&(b*(p-r)%(a-c))==0 && ((b*(p-r))/(a-c)==q)) ||
        ((c!=0)&&(b!=a) && (r%c==0) &&(c*(q-p)%(b-a))==0 && ((c*(q-p))/(b-a)==r)) ||
        
        
        ((r!=c) && (b!=0) && (q%b==0) && (a*q-p*b)%(c-r)==0 && (((a*q-p*b)/(c-r))==q)) ||
        ((r!=c) && (a!=0) && (p%a==0) && (b*p-q*a)%(c-r)==0 && (((b*p-q*a)/(c-r))==p)) ||
        ((p!=a) && (b!=0) && (q%b==0) && (c*q-r*b)%(a-p)==0 && (((c*q-r*b)/(a-p))==q)) ||
        
        ((q!=b) && (c!=0) && (r%c==0) && (a*r-p*c)%(b-q)==0 && (((a*r-p*c)/(b-q))==r)) ||
        ((p!=a) && (c!=0) && (r%c==0)  && (b*r-q*c)%(a-p)==0 && (((b*r-q*c)/(a-p))==r)) ||
        ((q!=b) && (a!=0) && (p%a==0) && (c*p-r*a)%(b-q)==0 && (((c*p-r*a)/(b-q))==p)) 
        
        )
        {
            cout<<"2\n";
        }
        else{
            cout<<"3\n";
        }
	 
	}
	return 0;
}
