//Print name no of times

#include<bits/stdc++.h>
using namespace std;
void f1toN(int i,int n) {
    if(i>n)
    return;
    cout<<("Kartik")<<endl;
    f1toN(i+1,n);
}
int main(){
    int n;
    cin>>n;
    f1toN(1,n);
    return 0;
}