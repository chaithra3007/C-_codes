#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h,s;
    cin>>h>>s;
    string st,abcd="o--";

    vector<int> vi;
    vector<int> vj;
    for (int i = 0; i < h; i++)

    {   cin>>st;
        for (int j = 0; j < s; j++)
    { 
        if(st[i] ==abcd[0])
         { vi.push_back(i);
           vj.push_back(j);
         }

    }
    }
cout<<abs(vi[0]-vi[1])+abs(vj[0]-vj[1]);
}