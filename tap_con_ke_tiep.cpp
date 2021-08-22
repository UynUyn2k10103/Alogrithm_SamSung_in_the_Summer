#include <bits/stdc++.h>
using namespace std;
int a[1001];
void next_tohop(int n,int k)
{
	int i=k;
	while(a[i]==n-k+i) i--;
	if(i<1) 
	{
		for(int i=1;i<=k;i++) cout<<i<<" ";
		cout<<"\n";
		return;
	}
	a[i]++;
	for(int j=i+1;j<=k;j++)
	{
		a[j]=a[j-1]+1;
	}
	for(int i=1;i<=k;i++) cout<<a[i]<<" ";
	cout<<"\n";
}
int main()
{
	//ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=1;i<=k;i++) cin>>a[i];
		next_tohop(n,k);
	}



	return 0;
}

