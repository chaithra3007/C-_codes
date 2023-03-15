#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int x,y;
    vector<int> vx;
    vector<int> vy;
    for (int i = 0; i < n; i++)
    {
        cin>>x>>y;
        vx.push_back(x);
        vy.push_back(y);
    }
    sort(vx.begin(),vx.end());
    sort(vy.begin(),vy.end());
    int h= vx[int(n/2)];
    int k= vy[(int)(n/2)];
    cout<<h<<" "<<k;

return 0;
}