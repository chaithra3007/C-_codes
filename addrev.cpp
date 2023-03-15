#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    int a,b;
    cin>>t;
    for (int i = 0; i <t; i++)
    {
        cin>>a>>b;
        int reva=0,revb=0;
        int c=a,d=b;
        while(c>0){
            reva=reva*10+c%10;
            c=c/10;
        }
        while(d>0){
            revb=revb*10+d%10;
            d=d/10;
        }
        if(a<0) reva=-reva;
        if(b<0)revb=-revb;
        int ans=reva+revb;
        int x=0,y=ans;
        while(y>0){
            x=x*10+y%10;
            y=y/10;
        }
        if(ans<0)x=-x;
        cout<<x<<"\n";
    }
return 0;
}