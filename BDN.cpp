#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
using namespace std;
int n;
void run(){
    cin>>n;
    stack <int> st;
    while (n){
        st.push(n%2);
        n/=2;
    }
    while(!st.empty()) {
        cout<<st.top();
        st.pop();
    }
    cout<<"\n";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        run();
    }
}