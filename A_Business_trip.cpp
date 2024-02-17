#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    int arr[12];
    for(int i=0;i<12;i++){
        cin>>arr[i];
    }
    sort(arr, arr+12, greater<int>());
    int d=0,w=0,i=0;
    while(w<k && i<12){
        w+=arr[i];
        d++;
        i++;
    }
    if(w<k){
        d=-1;
    }
    cout<<d;
    return 0;
}