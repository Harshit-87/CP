#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr,arr+m);
    int leastValue=arr[n-1]-arr[0];
    for(int i=1;i<=m-n;i++){
        if(arr[i+n-1]-arr[i]<leastValue){
            leastValue=arr[i+n-1]-arr[i];
        }
    }
    cout<<leastValue;
    return 0;
}