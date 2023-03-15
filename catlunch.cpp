#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    int x,sum=0,b=0;
    set<int,greater<int>> s;
    for(int i=0;i<n;i++){
        cin>>x;
        s.insert(x);
        b++;
        if(b>k-1){
           auto it=s.begin();
           if(*it<0) break;
           sum=sum+*it;
           s.erase(it);

        }
    }
    cout<<sum;

    return 0;
    }





