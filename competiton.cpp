#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b;
    int x,y;
    cin>>n>>a>>b;
    vector<int> vp;
    vector< pair <int,int>> vb;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        vp.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        vb.push_back(make_pair(vp[i],x)); 
    }
    sort(begin(vb), end(vb),[](pair<int, int> const& lhs, pair<int, int> const& rhs)
          {
            return (lhs.first - lhs.second) < (rhs.first - rhs.second);
          });
    int sum=0;
   for (int i = 0; i < n; i++){
          if (i<b) 
              sum=sum+vb[i].second;
          else
              sum=sum+vb[i].first;
   }
   cout<<sum;
}