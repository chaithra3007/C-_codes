#include<bits/stdc++.h>
using namespace std;

int minDistance(vector<pair<int,int>> &a){
    // Write your code here
    int n=a.size();
    auto b=a;
    sort(b.begin(),b.end());
    //sort(vy.begin(),vy.end());
    int h1= b[int(n/2)-1].first;
    int h2= b[int(n/2)].second;
    sort(begin(a), end(a),[](pair<int, int> const& lhs, pair<int, int> const& rhs)
          {
            return (lhs.first - lhs.second) < (rhs.first - rhs.second);
          });
    int k1=a[int(n/2)].first;
    int k2= a[int(n/2)].second;
    int ans1=0,ans2=0;
     for (int i = 0; i < n; i++)
    {
        ans1=ans1+abs(h1-b[i].first)+abs(h2-b[i].second);
        ans2=ans2+abs(k1-a[i].first)+abs(k2-a[i].second);
        
    }
    cout<<h1<<" "<<h2<<endl;
    cout<<k1<<" "<<k2<<endl;
    return min(ans1,ans2);
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a[i].first=x;
        a[i].second=y;
    }
  cout<<minDistance(a);


}    