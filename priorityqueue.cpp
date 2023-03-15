#include <bits/stdc++.h>
#define int long long
 
using namespace std;
 
int32_t main(){
    int n, k; cin >> n >> k;
    int A[n];
    for(int i=0; i<n; ++i){
        cin >> A[i];
    }
    priority_queue<int> can_eat; 
    // i=0, ..., k-1 (first k fishes)
    for(int i=0; i<k; ++i){ // initial fishes 
        can_eat.push(A[i]);
    } 
    // consume the remaining n-k fishes (idx k, ..., n-1)
    int cur = 0;
    int best = 0;
    for(int i=k; i<n; ++i){
        cur += can_eat.top();
        best = max(best,cur);
        can_eat.pop();
        can_eat.push(A[i]);
    }
    // eat the remaining fish
    while(can_eat.size() > 0){
        cur += can_eat.top();
        best = max(best,cur);
        can_eat.pop();
    }
    cout << best;
}