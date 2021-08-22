#include <bits/stdc++.h>
#define ll long long
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
using namespace std;
int c,n,res=-1;
int a[102];
void W(int k,int s)
{
	if(k==n){
		if(s<=c&&s>res) res=s;
		return ;
	}
	fori(i,0,2){
		if(i==1) W(k+1,s+a[k]);
		else W(k+1,s);
	}
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>c>>n;
	fori(i,0,n) cin>>a[i];
	W(0,0);
	cout<<res;

	return 0;
}


