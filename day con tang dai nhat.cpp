#include <bits/stdc++.h>
#define ll long long
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
using namespace std;
const long long oo=1e9+7;
int a[1005],L[1005];
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,maxx,res=0;
	cin>>n;
	fori(i,0,n) cin>>a[i];
	L[0]=1;
	fori(i,1,n)
	{
		maxx=0;
		fori(j,0,i)
		{
			if(maxx<L[j]&&a[j]<a[i]) maxx=L[j];
		}
		L[i]=maxx+1;
		res=max(res,L[i]);
	}
	cout<<res;

	return 0;
}


