#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    n = abs(n);
    if(n==0)
    return 1;
    int count =0;
    while(n>0){
       int last= n%10;
        count=count+1;
        n = n/10;       
    }
    cout<<count;
    return 0;
}