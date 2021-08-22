#include <bits/stdc++.h>
#define ll long long
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
using namespace std;
int x,n,s=0,k=0;
int a[21];
vector<int> v;
bool res=0;
bool check[21];
void BT(int k, int s)
{
	if(s==x)
	{
		cout<<"[";
		fori(i,0,v.size()) cout<<v[i];
		cout<<"]";
		v.clear();
		s=0;
		k+=1;
		return;
	}
	fori(i,0,n)
	{
		if(s+a[i]<=x) 
		{
			v.push_back(a[i]);
			BT(s+a[i]);
			BT(s);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>x;
		fori(i,0,n) cin>>a[i];
		sort(a,a+n);
		fori(i,0,21) check[i]=0;
		BT(0);
	}


	return 0;
}


