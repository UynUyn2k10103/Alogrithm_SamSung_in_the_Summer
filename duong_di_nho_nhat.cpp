#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
using namespace std;
ll n,m;
ll a[1005][1005],f[1005][1005];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        cin>>n>>m; n++; m++;
        fori(i,1,n) fori(j,1,m) {
            cin>>a[i][j];
            f[i][j]=0;
        }
        fori(i,1,n){
            fori(j,1,m){
                if(i==1) f[i][j]=f[i][j-1];
                else if(j==1) f[i][j]=f[i-1][j];
                else f[i][j]=min(f[i-1][j],min(f[i-1][j-1],f[i][j-1]));
                f[i][j]+=a[i][j];
            }
        }
        cout<<f[n-1][m-1]<<"\n";
    }
}