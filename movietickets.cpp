#include<bits/stdc++.h>
using namespace std;

bool sortbysec( pair<int,int> &a, pair<int,int> &b)
{
    return (a.second < b.second);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b;
    cin>>n;
    vector< pair <int,int>> vb;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        vb.push_back(make_pair(a,b));
    }
    sort(vb.begin(),vb.end(),sortbysec);
   int count=1;
   int x=vb[0].second;
   for(int i=0;i<n-1;i++){
       if(x<=vb[i+1].first){
            x=vb[i+1].second;
            count++;
       }
   } 
   cout<<count<<"\n";
}