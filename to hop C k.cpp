#include <bits/stdc++.h>
using namespace std;
const long long oo=1e9+7;
long long a[1001][1001];
long long tohop(long long n,long long k)
{
	if(a[k][n]!=0) return a[k][n];
	if(n==k||k==0) a[k][n]=1;
	else a[k][n] = (tohop(n-1,k-1)+tohop(n-1,k))%oo;
	return a[k][n];
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	long long n,k;
	while(t--)
	{
		cin>>n>>k;
		cout<<tohop(n,k)<<"\n";
	}


	return 0;
}


