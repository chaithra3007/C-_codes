#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

char func(char c){
    if(isupper(c))
        return tolower(c);
    else
        return toupper(c);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),func);
    cout<<s;
    return 0;
}