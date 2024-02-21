#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<string,int> m;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        m[a]++;
    }
    
    int cnt=0;
    string ans;
    for(auto it:m){
        if(it.second>cnt){
            cnt=it.second;
            ans=it.first;
        }
    }
    cout<<ans;
    return 0;
}