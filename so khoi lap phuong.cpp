#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
using namespace std;
string s;
int a[20];
int n,k;
ll res;
bool test (ll x){
	ll y;
	y=cbrt(x);
	return (y*y*y)==x;
}
void cd(){
	ll x=0;
	fori(i,1,k+1){
		x=x*10+(s[a[i]-1]-'0');
	}
	if(test(x)) res=max(res,x);
}
void sinh (){
	fori(i,1,k+1) a[i]=i;
	while(1){
		cd();
		int i=k;
		while(a[i]==n-k+i) i--;
		if(i<1) break;
		a[i]++;
		fori(j,i+1,k+1) a[j]=a[j-1]+1;
	}
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t=1;
	cin>>t;
	while(t--){
		cin>>s;
		n=s.size();
		fori(i,1,n+1){
			k=i;
			sinh();
		}
		if(res) cout<<res<<"\n";
		else cout<<"-1\n";
		res=0;
	}
}