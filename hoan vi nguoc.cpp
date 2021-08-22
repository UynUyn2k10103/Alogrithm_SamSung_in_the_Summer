#include <bits/stdc++.h>
using namespace std;
int a[20];
void print(int b[],int n)
{
	for(int i=1;i<=n;i++) cout<<b[a[i]];
	cout<<" ";
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n,i,k;
	int t;
	cin>>t;
	int b[20];
	while(t--)
	{
		cin>>n;
		for(int i=n;i>=1;i--) 
		{
			b[i]=n-i+1;
			a[i]=i;
		}
		while(1)
		{
			print(b,n);
			i=n-1;
			while (a[i]>a[i+1]) i--;
			if(i<1) break;
			k=n;
			while(a[i]>a[k]) k--;
			swap(a[i],a[k]);
			sort(a+i+1,a+n+1);
		}
		cout<<"\n";
	}

	return 0;
}

