#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
using namespace std;
int a[10000][10000];
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t,n,res;
	cin>>t;
	string s2,s1;
	while(t--){
		cin>>s1;
		s2=s1;
		reverse(s2.begin(),s2.end());
		res=0;
		fori(i,0,6000){
			fori(j,0,6000) a[i][j]=0;
		}
		for(int i=1;i<=s1.size();i++)
		{
			for(int j=1;j<=s2.size();j++)
			{
				if(s1[i-1]==s2[j-1]) a[i][j]=a[i-1][j-1]+1;
				else a[i][j]=max(max(a[i-1][j],a[i][j-1]),a[i-1][j-1]);
				if(a[i][j]>res) res=a[i][j];
			}
		}
		cout<<res<<"\n";
	}
}