#include<bits/stdc++.h>
using namespace std;

int reversesor(vector<int> v){
    int cost = 0;
    for (int i = 0; i < v.size()-1; i++)
    {
        int m= *min_element(v.begin()+i,v.end());

        auto k= find(v.begin(),v.end(),m);

        reverse(v.begin()+i,k+1);

        cost += distance(v.begin(),k) -i + 1;
    }
    return cost;

}


int main(int argc, char const *argv[])
{
    int a;
    cin >> a;
    for(int i=1;i<a+1;i++){
        int n;
        cin >> n;
        vector<int> v;
        for (int j = 0; j < n; j++)
        {   int x;
            cin>>x;
            v.push_back(x);
        }
        cout<<"Case #"<< i <<": "<<reversesor(v)<<"\n";
    }
    return 0;
}
