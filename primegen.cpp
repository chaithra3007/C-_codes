#include <bits/stdc++.h>
using namespace std;

#define k 1000000
bool arr[k+1];
void createseieve(){
    int n=1000000;
    for(int i=0;i<n+1;i++){
        arr[i]=1;
    }
    arr[0]=arr[1]=0;
    for(int i=2;i*i<n+1;i++){
        if(arr[i]==1){
            for(int j=i*i;j<n+1;j=j+i)
               arr[j]=0;
        }
    }
}

vector<int> generate(int n){
    vector<int> vi;
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==1)
          vi.push_back(i);
    }
    return vi;
    
}

int main() {
    createseieve();
    int t;
	cin>>t;
	while(t--){
	    int l,r;
	    cin>>l>>r;
	    int dum[r-l+1];
	    vector<int> pri = generate(sqrt(r));
	    for(int i=0;i<r-l+1;i++)
	     dum[i]=1;
	     
	     for(auto p:pri){
	         
	         int a=(l/p)*p;
	         if(a<l) a=a+p;
	         for(int i=max(a,p*p);i<=r;i=i+p){
	             dum[i-l]=0;
	             
	         }
	     }
	     if(l==1){dum[0]=0;}
	   for(int i=l;i<=r;i++){
	       if(dum[i-l]==1)
	         cout<<i<<"\n";
	       
	   } 
	  cout<<"\n";  
	}
	return 0;
}