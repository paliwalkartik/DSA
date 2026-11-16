//sum 1 to N using functional way

#include<bits/stdc++.h>
using namespace std;
int f(int n){
    if(n==0){
        return 0;
    }
    return n+f(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<f(n)<<endl;
}

//TC = O(n)
//SC = O(n)