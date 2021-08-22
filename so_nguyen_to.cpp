#include <bits/stdc++.h>
#define ll long long
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
using namespace std;
const long long oo=1e9+7;
vector < vector<int> > ans;
vector<int>v;
vector <int> de;
int ktra[501];
int n,s,k;
bool check[500];
void ctr()
{
	ktra[1]=1;
	ktra[0]=1;
	fori(i,2,501)
	{
		if(ktra[i]) continue;
		for(int j=i*i;j<501;j+=i) ktra[j]=1;
	}
}
void Try(int vt,int key,int dem)
{
	if(key>s||dem>n) return;
	if(key==s){
		if(dem==n) ans.push_back(v);
		return;
	}
	fori(i,vt,de.size())
	{
		if(check[i]==0)
		{
			check[i]=1;
			v.push_back(de[i]);
			Try(i,key+de[i],dem+1);
			v.pop_back();
			check[i]=0;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	ctr();
	while(t--)
	{
		cin>>n>>k>>s;
		fori(i,k+1,s) if(ktra[i]==0) de.push_back(i);
		Try(0,0,0);
		cout<<ans.size()<<"\n";
		fori(i,0,ans.size())
		{
			fori(j,0,n) cout<<ans[i][j]<<" ";
			cout<<"\n";
		}
		ans.clear();
		de.clear();
		v.clear();
	}


	return 0;
}

