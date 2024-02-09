#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt5=0,cnt0=0,actual=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==5) cnt5++;
        else cnt0++;
        if((cnt5*5)%9==0) actual=cnt5;
    }
    if(actual!=0 && cnt0!=0){
        for(int i=0;i<actual;i++)
            cout<<5;
        for(int i=0;i<cnt0;i++)
            cout<<0;
    }
    else if(cnt0!=0) cout<<0;
    else cout<<-1;
    return 0;
}