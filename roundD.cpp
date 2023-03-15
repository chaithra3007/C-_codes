#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    for(int j=1;j<t+1;j++){
      int n,m;
      cin>>n>>m;
      vector<int> vi;
      for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vi.push_back(x);
      }
      sort(vi.begin(),vi.end(),greater<int>());
      double ans=0.0;
      for(int i=0;i<m-1;i++){
        ans=ans+vi[i];
      }
      if((n-1+m-1)%2!=0){
        ans=ans+(double(vi[(n+m-2)/2]+vi[((n+m-2)/2)+1]))/2;
      }
      else{
        ans=ans+vi[(n+m-2)/2];
      }
    cout.unsetf(ios::showpos);
    cout<<"Case #"<<j<<": "<<setprecision(7)<<ans<<endl;
    }
    return 0;
}   