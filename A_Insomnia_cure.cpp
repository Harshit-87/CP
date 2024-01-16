#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int arr[d]={0};

    for(int i=k;i<=d;i+=k){
        arr[i]=-1;
    }
    for(int i=l;i<=d;i+=l){
        arr[i]=-1;
    }
    for(int i=m;i<=d;i+=m){
        arr[i]=-1;
    }
    for(int i=n;i<=d;i+=n){
        arr[i]=-1;
    }
    int cnt=0;
    for(int i=1;i<=d;i++){
        if(arr[i]==-1)
            cnt++;
    }
    cout<<cnt;
}
