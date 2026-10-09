#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     if(n%i==0)
    //     cout<<i<<endl;
    // }

    int n;
    cin>>n;
    vector<int> ls;
    //O(sqrt(n))
    for(int i =1;i*i<=(n);i++){
        if(n%i==0){
            ls.push_back(i);
            if((n/i)!=i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(),ls.end());
    //(no of factors*log(no of factors)):n means no of factors
    for(auto it:ls) cout<<it<<" ";
    //O(no of factors)
}