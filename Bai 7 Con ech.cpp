#include <bits/stdc++.h>
using namespace std;
const long long oo=1e9+7;
long long step[100];
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	long long n;
	step[1]=1;
	step[2]=2;
	step[3]=4;
	for(int i=4;i<=50;i++) step[i]=(step[i-1]+step[i-2]+step[i-3]);
	while(t--)
	{
		cin>>n;
		cout<<step[n]<<"\n";
	}


	return 0;
}


