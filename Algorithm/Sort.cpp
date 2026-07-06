#include<bits/stdc++.h>
using namespace std;
//int main(){
   // vector<pair<int,int>>v={{1,2},{2,3},{4,1}};
   // sort(v.begin(),v.end());
   // sort(v.begin(),v.end(),greater<pair<int,int>>());
  //  for(auto &it : v){
    //    cout<<it.first<< " "<<it.second<<" ";
   // }
    bool comp(pair<int,int>p1,pair<int,int>p2){
        if(p1.second<p2.second)return true;
        if(p1.second>p2.second)return false;

        if(p1.first>p2.first)return true;
        return false;
    }
    int main(){
        vector<pair<int,int>>v={{1,3},{3,3},{4,1}};
        sort(v.begin(),v.end(),comp);
        for(auto &it : v){
            cout<<it.first<<" "<<it.second<<" ";
        }

    }

  



// }