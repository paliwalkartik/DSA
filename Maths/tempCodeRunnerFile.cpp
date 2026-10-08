#include<bits/stdc++.h>
using namespace std;
int main(){
int n,sum;
sum=0;
cin>>n;
int dup=n;
while(n<0){
    int last=n%10;
    sum=sum + (last*last*last);
    n = n/10;
}
if(sum==dup)
cout<<"Amstrong number";
else
cout<<"Not Amstrong number";
}