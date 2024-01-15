#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    double sum=0;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        sum+=num;
    }

    double ans=sum/n;
    cout<<fixed<<setprecision(12)<<ans<<endl;
    return 0;
}