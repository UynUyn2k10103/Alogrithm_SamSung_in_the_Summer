#include <bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
using namespace std;
const ll oo=1e6+5;
vector <ll> l;
vector <ll> r;
vector <ll> de;
stack <ll> k;
ll n;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        n++;
        l.resize(n);
        r.resize(n);
        de.resize(n);
        fori(i,1,n) cin>>de[i];
        fori(i,1,n){
            while(!k.empty()&&de[i]>=de[k.top()]) k.pop();
            l[i]= k.empty()? 0 : k.top();
            k.push(i);
        }
        while(!k.empty()) k.pop();
        de.clear();
        fori(i,1,n) cout<<i-l[i]<<" ";
        l.clear();
        r.clear();
        cout<<"\n";
    }
}