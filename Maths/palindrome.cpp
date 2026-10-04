#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int dup =n;
n = abs(n);
int rev =0;
while(n>0){
int last = n%10;
rev = (rev*10)+last;
n = n/10;
}
if(rev==dup){
    cout<<"true"<<endl;
}
else{
    cout<<"false"<<endl;
}

}