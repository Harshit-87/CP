#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t=n+1;
    int s=0;
    for(int i=0;i<n;i++){
        int f;
        cin>>f;
        s+=f;
    }
    int p=s%t;
    int cnt=0;
    for(int i=1;i<=5;i++){
        p+=1;
        if(p>t){
            p=1;
        }
        else if(p!=1){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}