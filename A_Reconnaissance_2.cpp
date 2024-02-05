#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mini=INT_MAX;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a,b;
    for(int i=0;i<n-1;i++){
        // mini=min(mini,abs(arr[i]-arr[i+1]));
        if(abs(arr[i]-arr[i+1])<mini){
            a=i;
            b=i+1;
            mini=abs(arr[i]-arr[i+1]);
        }
    }
    if(abs(arr[n-1]-arr[0])<mini){
            a=n-1;
            b=0;
            mini=abs(arr[n-1]-arr[0]);
        }
    cout<<a+1<<" "<<b+1;
    return 0;
}