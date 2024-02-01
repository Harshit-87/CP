#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    deque<pair<int,int>>dq;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        dq.push_back({a,i});
    }
    while(dq.size()!=1){
        auto it=dq.front();
        dq.pop_front();
        if(it.first>m){
            dq.push_back({it.first-m, it.second});
        }
    }
    cout<<dq.front().second<<endl;
    return 0;
}