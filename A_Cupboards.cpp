#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b;
    int l0=0,l1=0,r0=0,r1=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a==0) l0++;
        else l1++;
        if(b==0) r0++;
        else r1++;
    }

    int ans=0;
    if(l0>l1) ans+=l1;
    else ans+=l0;
    if(r0>r1) ans+=r1;
    else ans+=r0;
    cout<<ans;
    return 0;
}