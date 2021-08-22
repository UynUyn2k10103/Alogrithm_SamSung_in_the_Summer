#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
const ll mod=1e9+7;
ull dao(ull n){
    ull sum=0;
    while (n){
        sum=sum*10+n%10;
        n/=10;
    }
    return sum%mod;
}
ull ctr(ull n, ull r){
    if(r==0) return 1;
    ull t=ctr(n,r/2);
    t=t*t;
    if(r%2==1) return (n*(t%mod))%mod;
    return t%mod;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    ull n,r;
    while(t--){
        cin>>n;
        r=dao(n);
        n%=mod;
        cout<<ctr(n,r)<<"\n";
    }
}