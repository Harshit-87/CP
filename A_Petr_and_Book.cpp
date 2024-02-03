#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[7];
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    int day;
    int cnt=0;
    while(n>0){
        int i;
        for(i=1;i<=7;i++){
            n-=arr[i-1];
            if(n<=0) break;
        }
        if(n<=0){
            cnt=i;
        }
    }
    cout<<cnt;
    return 0;
}