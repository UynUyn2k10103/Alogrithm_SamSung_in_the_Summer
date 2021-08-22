#include <bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
using namespace std;
string s1,s2,s3;
int l[200][200][200],ans;
int main (){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t,x,y,z;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        cin>>s1>>s2>>s3;
        x++; y++; z++;
        ans=0;
        fori(i,1,x) l[i][0][0]=0;
        fori(i,1,y) l[0][i][0]=0;
        fori(i,1,z) l[0][0][i]=0;
        fori(i,1,x){
            fori(j,1,y){
                fori(k,1,z){
                    if(s1[i-1]==s2[j-1]&&s3[k-1]==s1[i-1]) l[i][j][k]=l[i-1][j-1][k-1]+1;
                    else l[i][j][k]=max(l[i-1][j][k],max(l[i][j-1][k],l[i][j][k-1]));
                    ans=max(ans,l[i][j][k]);
                }
            }
        }
        cout<<ans<<"\n";
    }
}