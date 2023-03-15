#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
	cin>>n>>m;
	s;vector<int> vi;
	for(int i=0;i<m;i++){
		int x;
		cin>>x;
		vi.push_back(x);
	}
	sort(vi.begin(),vi.end());
    cout<<vi[2];
	int sum=0,ans=-1;
	for(int i=0;i<m;i++){
         sum=sum+vi[i];
		if(sum>n){
		     ans=i;
			 break;
		}
	}
	if(ans==-1)
		cout<<"abc";
	else
		cout<<ans;
return 0;
}