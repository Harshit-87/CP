#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int mini=arr[0];
    int maxi=arr[0];
    int cnt=0;
    for(int i=1;i<n;i++){
        if(arr[i]<mini){
            mini=arr[i];
            cnt++;
        }
        if(arr[i]>maxi){
            maxi=arr[i];
            cnt++;
        }
    }

    cout<<cnt;
    return 0;
}