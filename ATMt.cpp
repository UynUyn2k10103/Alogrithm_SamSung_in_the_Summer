#include<bits/stdc++.h>
using namespace std;
vector < int > a; 
vector <vector<int> > res; 
bool check[500];
bool test[201];
int N,P,S;
vector <int> v;
void sangNto() {
	for(int i=2;i<=200;i++) {
		if(check[i]) continue;
        else
        {
			for(int j=i*i;j<=200;j+=i) 
				check[j]=1;
		}
	}
}
void nhap() {
	cin >> N >>P >>S;
    a.clear();
    for(int i=P;i<=S;i++) if(check[i]==0) a.push_back(i);
	res.clear();
}
void Try(int vt,int key,int dem)
{
	if(key>S||dem>N) return;
	if(key==S){
		if(dem==N) res.push_back(v);
		return;
	}
	for(int i=vt;i<a.size();i++)
	{
		if(test[i]==0)
		{
			test[i]=1;
			v.push_back(a[i]);
			Try(i+1,key+a[i],dem+1);
			v.pop_back();
			test[i]=0;
		}
	}
}
void xuat() {
	cout << res.size() << '\n';
	for(int i=0;i<res.size();i++) {
		for(int j=0;j<res[i].size();j++) 
			cout << res[i][j] << ' ';
		cout << '\n';
	}
}
int main () {
	ios_base::sync_with_stdio(0);cin.tie(0);
	sangNto();
	int t;
	cin>>t;
	while(t--) {
		nhap();
		v.clear();
		Try(0,0,0);
		xuat();
	}
}