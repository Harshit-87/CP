#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int initial=1;
    long long ans=0;
    for(int i=0;i<m;i++){
        int present;
        cin>>present;

        if(present>=initial){
            ans+=present-initial;
        }
        else{
            ans+=n-(initial-present);
        }

        initial=present;
    }
    cout<<ans;
    return 0;
}