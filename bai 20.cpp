#include <bits/stdc++.h>
#define ll long long
#define fori(i,a,b) for(int i=a;i<b;i++);
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
using namespace std;
const ll oo=1e9+7;
ll a[11][11],b[11][11];
int n;
long long k;
void tichmt(ll x[11][11],ll y[11][11])
{
	ll c[11][11];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			c[i][j]=0;
			for(int k=0;k<n;k++)
			{
				c[i][j]+= (x[i][k]*y[k][j])%oo;
				c[i][j] %=oo;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			a[i][j]=c[i][j];
		}
	}
}
void Pow(ll a[11][11], ll x)
{
	if(x<=1) return;
	Pow(a,x/2);
	tichmt(a,a);
	if(x%2==1) tichmt(a,b);
}
void results()
{
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
			b[i][j]=a[i][j];
		}
	}
	Pow(a,k);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		results();
	}


	return 0;
}


