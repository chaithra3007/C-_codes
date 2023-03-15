#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k,x;
        long long a;
        vector<int> vi;
        cin>>k;
        cin>>x;
        v.push_back(x);
        for(int i=0i<k-1;i++){
            cin>>x;
            vi.push_back(x*vi[i]);
        }
    cout<<*max_element(vi.begin(),vi.end())<<"\n";

    }

return 0;
}
