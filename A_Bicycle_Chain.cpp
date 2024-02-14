#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    int maxi=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr2[j]%arr[i]==0){
                if((arr2[j]/arr[i])>maxi){
                    maxi=arr2[j]/arr[i];
                    cnt=1;
                }
                else if((arr2[j]/arr[i])==maxi){
                    cnt++;
                }
            }
        }
    }

    cout<<cnt<<endl;   
    return 0;
}