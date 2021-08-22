#include<bits/stdc++.h>
using namespace std;
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
ll m,n,ans;
ll a[1000][1000];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        ans=0;
        n++; m++;
        fori(i,1,n){
            fori(j,1,m) {
                cin>>a[i][j];
                if(a[i][j]) a[i][j]=a[i-1][j]+1;
            }
            stack <ll> k;
            ll left[1005],right[1005];
            fori(j,1,m){
                while(!k.empty()&&a[i][j]<=a[i][k.top()]) k.pop();
                left[j]= k.empty()? 0: k.top();
                k.push(j);
            }
            forr(j,m,1){
                while(!k.empty()&&a[i][j]<=a[i][k.top()]) k.pop();
                right[j]= k.empty()? m: k.top();
                k.push(j);
            }
            fori(j,1,m) ans=max(ans,a[i][j]*(right[j]-left[j]-1));
        }
        cout<<ans<<"\n";
    }
}