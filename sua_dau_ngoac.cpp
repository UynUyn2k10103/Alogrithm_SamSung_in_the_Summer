#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    string s;
    stack <char> st;
    stack <char> tmp;
    ll dem=0;
    char x;
    while(t--){
        dem=0;
        cin>>s; 
        //cout<<s.size();
        fori(i,0,s.size()){
            if(s[i]=='(') st.push('(');
            else{
                while(!st.empty()&&st.top()==')'){
                    tmp.push(')');
                    st.pop();
                }
                if(st.empty()){
                    if(tmp.empty()) st.push('(');
                    else tmp.pop();
                    dem++;
                }
                else st.pop();
                while(!tmp.empty()){
                    st.push(')');
                    tmp.pop();
                }
            }
        }
        //cout<<dem;
        while(!tmp.empty()) tmp.pop();
        while(!st.empty()){
            x=st.top();
            st.pop();
            if(x=='('){
                dem++;
                while(!st.empty()&&st.top()==')'){
                    tmp.push(')');
                    st.pop();
                }
                if(st.empty()){
                    dem++;
                    tmp.pop();
                }
                else st.pop();
            }
            else{
                st.pop();
                dem++;
                st.pop();
            }
            while(!tmp.empty()){
                x=tmp.top();
                st.push(x);
                tmp.pop();
            }
        }
        cout<<dem<<"\n";
    }
}