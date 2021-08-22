#include <bits/stdc++.h>
using namespace std;
int a[1001];
void next_hoanvi(int n)
{
	int i,k;
	i=n-1;
	while (a[i]>a[i+1]) i--;
	if(i<1) 
	{
		for(int i=1;i<=n;i++) cout<<i<<" ";
		cout<<"\n";
		return;
	}
	k=n;
	while(a[i]>a[k]) k--;
	swap(a[i],a[k]);
	sort(a+i+1,a+n+1);
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	cout<<"\n";
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		next_hoanvi(n);
	}


	return 0;
}

