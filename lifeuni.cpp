#include<bits/stdc++.h>
using namespace std;
int main()
{   ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    vector<int> vi;
    while(cin>>n && n!= 42){
       vi.push_back(n);
    }
    for(int i=0;i<vi.size();i++){
       cout<<vi[i]<<"\n";
    }
    return 0;
}