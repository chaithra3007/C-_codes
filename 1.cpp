#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back
int main(){

   int t;
   cin >> t;
   while(t--){
      int n,k;
      cin >> n;
      vi v(n);
      for(int i=0;i<n;i++)
          {
              cin>>v[i];
          }
      cin>>k;
      int a=v[k-1];
      sort(v.begin(),v.end());
      for (int i = 0; i < n; i++) {
          if(a==v[i])
            { 
                cout << i+1 <<"\n";
                break;
                
            }
      }
      
   }


    return 0;
}