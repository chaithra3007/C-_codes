#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x;
    cin>>n;
    vector<int> vi;
    int a[n]; 
    for (int i=0;i<n;i++){
        cin>>x;
        vi.push_back(x);
        a[i]=1;
    }
    for(int i=0;i<n-1;i++){
       if(vi[i]<vi[i+1]){
        a[i+1]=a[i]+1;
       }
    }
    for(int i=n-1;i>0;i--){
        if(vi[i]<vi[i-1]){
            a[i-1]=max(a[i-1],a[i]+1);
        }
    }
    long long abc=0;
    cout<<accumulate(a,a+n,abc)<<"\n";
return 0;
}