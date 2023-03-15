#include<bits/stdc++.h>
using namespace std;

int main(){
     ios::sync_with_stdio(0);
	 cin.tie(0);
	int n,x;
	cin>>n;
	int a[n];
	int sum=0;
	for (int i=0;i<n;i++){
	   cin>>x;
	   sum=sum+x;
	}
	for(int i=0;i<n;i++){
	     cin>>x;
		a[i]=x;
	}
    sort(a,a+n,greater<int>());
	for(int i=0;i<n;i++){
	    sum=sum+a[i]*(i);
	}
    cout<<sum;

return 0;
}