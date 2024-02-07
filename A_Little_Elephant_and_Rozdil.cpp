#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,mini=INT_MAX,ind=0;
    cin>>n;
    unordered_map<int,pair<int, int>>mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x].first=i+1;
        mp[x].second++;
        mini=min(mini,x);
    }
    auto it=mp[mini];
    if(it.second>1) cout<<"Still Rozdil";
    else cout<<it.first;
    return 0;
}