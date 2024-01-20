#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int en=0,ex=0;
    int tot=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        cin>>ex>>en;
        tot=tot-ex;
        tot=tot+en;
        maxi=max(maxi,tot);
    }
    cout<<maxi;
    return 0;
}