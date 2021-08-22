#include <bits/stdc++.h>
using namespace std;
string s;
void last_np ()
{
	int i=s.size()-1;
	while(s[i]=='0') 
	{
		s[i]='1';
		i--;
	}
	if(i<0)
	{
		for(i=0;i<s.size();i++) cout<<"1";
		cout<<"\n";
		return;
	}
	s[i]='0';
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
		last_np();
	}



	return 0;
}

