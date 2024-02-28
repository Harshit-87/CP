#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    priority_queue<int>pq;
    priority_queue<int,vector<int>,greater<int>>pq1;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        pq.push(x);
        pq1.push(x);
    }
    int n1=n;
    int maxi=0;
    while(n1--){
        int x=pq.top();
        maxi+=x;
        pq.pop();
        x-=1;
        if(x>0)
            pq.push(x);
    }
    int mini=0;
    while(n--){
        int x=pq1.top();
        mini+=x;
        pq1.pop();
        x-=1;
        if(x>0)
            pq1.push(x);
    }
    cout<<maxi<<" "<<mini<<endl;
    return 0;
}