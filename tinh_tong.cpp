#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
using namespace std;
string s;
ll k,b,m,x,c=1;
ll cd(int vt){
    return (x*b+(s[vt]-'0'))%m;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    stack <ll> st;
    cin>>s;
    cin>>k>>b>>m;
    x=cd(0);
    fori(i,1,k){
        c=(c*b)%m;
        x=cd(i);
    }
    st.push(x);
    fori(i,1,s.size()-k+1){
        x=st.top();
        x=x-(c*(s[i-1]-'0'))%m;
        if(x<0) x+=m;
        x=cd(i+k-1);
        st.push(x);
    }
    cout<<"\n";
    x=0;
    while(!st.empty()){
        x+=st.top();
        st.pop();
    }
    cout<<x;
}