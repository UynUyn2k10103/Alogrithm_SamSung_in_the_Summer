#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
using namespace std;
ll f[1000][1000];
ll a[1000][1000];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int m,n;
    cin>>m>>n;
    m++; n++;
    fori(i,1,m){
        fori(j,1,n) cin>>a[i][j];
    }
    ll res=1e18;
    res=-res;
    f[1][0]=0;
    fori(i,1,n) f[1][i]=a[1][i]+f[1][i-1];
    fori(i,1,m) f[i][1]=a[i][1];
    fori(j,2,n){
        fori(i,1,m) {
            if(i==1) f[1][j]=max(f[1][j-1],f[2][j]+a[1][j]);
            else f[i][j]= max(f[i-1][j-1],max(f[i][j-1],f[i+1][j-1]));
            f[i][j]+=a[i][j];
            if(j==n-1) res=max(res,f[i][n-1]);
        }
    }
    cout<<res;
}