#include <bits/stdc++.h>
#define ll long long
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
using namespace std;
int n;
ll s;
ll t[31];
bool res=1;
void Try(int vt,ll s, int dem)
{
	if(s==0){
		cout<<dem;
		res=0;
		return;
	}
	if(vt==0){
		if(res==0) cout<<"-1";
	}
	for(int i=vt;i>=0;i--)
	{
		if(res&&s-t[i]>=0&&s<=t[i]*vt){
			Try(i-1,s-t[i],dem+1);
		}
		else return;
	}
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>s;
	fori(i,0,n) cin>>t[i];
	sort(t,t+n);
	Try(n-1,s,0);
	return 0;
}

