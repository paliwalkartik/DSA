#include<bits/stdc++.h>
using namespace std;
void fNto1(int i,int n) {
    if(i<1)
    return;
    cout<<(i)<<endl;
    fNto1(i-1,n);
}
int main(){
    int n;
    cin>>n;
    fNto1(n,n);
    return 0;
}