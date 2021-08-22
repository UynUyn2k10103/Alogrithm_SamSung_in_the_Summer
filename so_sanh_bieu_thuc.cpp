#include <bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
using namespace std;
string s1,s2;
bool res;
void rutgon(){
    string s;
    if(res) s=s1;
    else s=s2;
    stack <char> st,tmp;
    char x;
    fori(i,0,s.size()){
        if(s[i]!=')') st.push(s[i]);
        else{
            while(st.top()!='(')
            {
                x=st.top();
                tmp.push(x);
                st.pop();
            }
            if(tmp.top()=='+') tmp.pop();
            st.pop();
            if(st.empty()||st.top()=='('||st.top()=='+'){
                if(st.top()=='-'&&st.top()=='+') st.pop();
                while(!tmp.empty()){
                    x=tmp.top();
                    st.push(x);
                    tmp.pop();
                }
            }
            else {
                if(tmp.top()=='-') {
                    st.pop();
                    tmp.pop();
                    st.push('+');
                }
                while(!tmp.empty()){
                    x=tmp.top();
                    if(x=='+')x='-';
                    else if(x=='-') x='+';
                    st.push(x);
                    tmp.pop();
                }
            }
        }
    }
    s="";
    while(!st.empty()){
        x=st.top();
        s=x+s;
        st.pop();
    }
    if(res) s1=s;
    else s2=s;
}
bool cp(){
    if(s1==s2) return 1;
    else return 0;
}
void solves (){
    res=1;
    cin>>s1>>s2;
    rutgon();
    res=0;
    rutgon();
    //cout<<s1<<" "<<s2<<"\n";
    if(cp()) cout<<"YES";
    else cout<<"NO";
    cout<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solves();
    }
}