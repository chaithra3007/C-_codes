#include<bits/stdc++.h>
using namespace std;

bool sortbysec( pair<int,int> &a, pair<int,int> &b)
{
    return (a.second < b.second);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n,a,b;
    cin>>t;
    for(int i=0;i<t;i++){
          vector<pair<int,int>> vi;
          cin>>n;
          for (int j = 0; j < n; j++)
          {
            cin>>a>>b;
            vi.push_back(make_pair(a,b));
          }
          sort(vi.begin(),vi.end(),sortbysec);
         int count=1;
        int x=vi[0].second;
   for(int i=0;i<n-1;i++){
       if(x<=vi[i+1].first){
            x=vi[i+1].second;
            count++;
       }
       
       }
          cout<<count<<"\n";

    
}
}