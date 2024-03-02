#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v[100001];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v[x].push_back(i);
    }
    vector<pair<int, int>>ans;

    for(int i=0;i<100001;i++){
        if(v[i].size()==0) continue;
        else if(v[i].size()==1) ans.push_back({i,0});
        else{
            bool flag=true;
            int d=v[i][1]-v[i][0];
            for(int j=1;j<v[i].size();j++){
                if(v[i][j]-v[i][j-1]!=d){
                    flag=false;
                    break;
                }
            }
            if(flag) ans.push_back({i, d});
        }
    }

    cout<<ans.size()<<endl;
    for(auto it:ans){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}