#include <bits/stdc++.h>
using namespace std;
string s;
void next_np()
{
	int i=s.size()-1;
	while(s[i]=='1') 
	{
		s[i]='0';
		i--;
	}
	if(i<0)
	{
		for(i=0;i<s.size();i++) cout<<"0";
		cout<<"\n";
		return;
	}
	s[i]='1';
    cout <<s<<"\n";
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		cin>>s;
		next_np();
	}



	return 0;
}

