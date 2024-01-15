#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int h;

    int lh=INT_MIN, rh=INT_MAX;
    int li, ri;
    for(int i=0;i<n;i++){
        cin>>h;
        if(h>lh) lh=h, li=i;
        if(h<=rh) rh=h, ri=i;
    }

    int ans=li+n-1-ri;
    if(li<ri) cout<<ans;
    else cout<<ans-1;
    return 0;
}