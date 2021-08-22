#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t,k;
    cin>>t;
    string s,tmp,kq;
    stack <string> st;
    stack <int> so;
    while(t--){
        cin>>s;
        fori(i,0,s.size()){
            tmp="";
            if(s[i]!=']'){
                tmp+=s[i];
                st.push(tmp);
            }
            else
            {
                while(st.top()!="["){
                    tmp=st.top()+tmp;
                    st.pop();
                }
                st.pop();
                while(!st.empty()&&st.top()<="9"&&st.top()>="0"){
                    kq=st.top();
                    st.pop();
                    k=kq[0]-'0';
                    so.push(k);
                }
                k=0;
                while(!so.empty()){
                    k=k*10+so.top();
                    so.pop();
                }
                kq="";
                fori(j,0,k) kq+=tmp;
                st.push(kq);
            }
            
        }
        kq="";
        while(!st.empty()){
            tmp=st.top();
            kq=tmp+kq;
            st.pop();
        }
        cout<<kq<<"\n";
    }
}