#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t,n,x;
	cin>>t;
	priority_queue <long long, vector <long long>, greater <long long> > q;
	long long sum,cp;
	while(t--)
	{
		cp=0;
		cin>>n;
		for(int i=0;i<n;i++) 
		{
			cin>>x;
			q.push(x);
		}
		while(1)
		{
			x=q.top();
			q.pop();
			sum=q.top()+x;
			cp+=sum;
			q.pop();
			if(q.empty()) break;
			q.push(sum);
		}
		cout<<cp<<"\n";
	}
	return 0;
}

