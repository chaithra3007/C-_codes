#include <bits/stdc++.h>
using namespace std;

bool sor(pair<int,int> &a,pair<int,int> &b){
    if(a.second==1 && b.second==1)
         return a.first>b.first;
    return a.second>b.second;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> vi;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        vi.push_back(make_pair(x,y));  
    }
    sort(vi.begin(),vi.end(),sor);
    long long su=0;
    /*for(int i=0;i<n;i++)
    cout<<vi[i].first<<vi[i].second<<"\n";*/
    for(int i=0;i<k;i++){
        su=su+vi[i].first;
    }
     for(int i=k;i<n;i++){
         if(vi[i].second==0)
         su=su+vi[i].first;
         if(vi[i].second==1)
         su=su-vi[i].first;
     }    
     cout<<su;
    return 0;
}