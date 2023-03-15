#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin>>test;
    for(int j=1;j<test+1;j++){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int small=0;
    int cap=0;
    int speci=0;
    int digit=0;
    for (int i=0;i<n;i++){
          if(s[i]<=90 && s[i]>=65)
              {
                  cap=1;
                  continue;
              }
          else if(s[i]<=122 && s[i]>=97)
          {
              small=1;
              continue;
          }
          else if(s[i]<=57 && s[i]>=48){
              digit=1;
              continue;
          }
          else if(s[i]==35 || s[i]==64 ||s[i]==42 || s[i]==38){
                 speci=1;
          }
    }
    if(speci==0)
        s=s+"@";
    if(digit==0)
        s=s+"1";
    if(small==0)
        s=s+"a";
    if(cap==0)
       s=s+"A";
    if(s.size()>=7)
       cout<<"Case #"<<j<<": "<< s<<"\n";
    else{
        string abc="vansh";
        if(s.size()==5)
          cout<<"Case #"<<j<<": "<< s<<"12"<<"\n";
        if(s.size()==6)
          cout<<"Case #"<<j<<": "<< s<<"1"<<"\n";
        if(s.size()==4)
          cout<<"Case #"<<j<<": "<< s<<"123"<<"\n";
    }

    }
}
