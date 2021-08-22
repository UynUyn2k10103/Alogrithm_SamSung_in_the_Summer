#include<bits/stdc++.h>
using namespace std;
int stop=0;
void xuat(string s) {
//	int n=s.size();
//	for(int i=0;i<n;i++) 
//		cout << s[i];
//	cout << "\n";
	cout<<s<<"\n";	
}
void sinh(string s) {
	int n=s.size();
	int i=n-2;
	while(i>=0 && s[i]>s[i+1]) i--;
	if(i<0) stop=1;
	else {
		int k=n-1;
		while(s[i]>s[k]) k--;
		swap(s[i],s[k]);
//		int l=i+1,r=n-1;
//		while(l<r) {
//			swap(s[l],s[r]);
//			l++;r--;
//		} 
		sort(s.begin()+i+1,s.end()); 
		cout<<s<<"\n";	
	}
}
int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		sinh(s);
	//	xuat(s);
//		while(stop==0) {
//			xuat(s);
//			sinh(s);
//		}
		stop=0;
	//	cout << "\n";
	}
}
