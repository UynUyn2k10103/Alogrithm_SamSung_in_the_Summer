#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
using namespace std;
ll *a;
int n,k;
ll res;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        res=-1;
        cin>>n>>x;
        a=new ll [n+5];
        cin>>a[0];
        fori(i,1,n) {
            cin>>k;
            a[i]=a[i-1]+k;
        }
        fori(i,0,n){
            
        }
        xl();
        cout<<res<<"\n";
    }
}