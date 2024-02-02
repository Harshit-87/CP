#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,l,r,u,d,x,y;
    while(cin>>n){
        int X[n+1],Y[n+1];
        for(int i=0;i<n;i++){
            cin>>X[i]>>Y[i];
        }
        int point=0;
        for(i=0;i<n;i++){
            l=r=u=d=0;
            x=X[i];y=Y[i];
            for(j=0;j<n;j++){
                if(X[j]==x){
                    if(Y[j]>y) u++;
                    if(Y[j]<y) d++; 
                }
                if(Y[j]==y){
                    if(X[j]>x) r++;
                    if(X[j]<x) l++;
                }
            }
            if(l&&r&&u&&d) point++;
        }
        cout<<point<<endl;
    }
    return 0;
}