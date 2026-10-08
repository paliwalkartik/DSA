#include<bits/stdc++.h>
using namespace std;
int main(){
int n,sum,count;
count=0;
sum=0;
cin>>n;
int dup=n;
while(n>0){
    int last=n%10;
    count = count+1;
    n = n/10;
}
n=dup;
while(n>0){
    int last=n%10;
    sum=sum + pow(last,count);
    n = n/10;
}
if(sum==dup)
cout<<"Armstrong number"<<endl;
else
cout<<"Not Armstrong number"<<endl;
}