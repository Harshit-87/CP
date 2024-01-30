#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    unordered_map<long long,long long>mpp;
    for(long long i=0;i<n;i++){
        int ele;
        cin>>ele;
        mpp[ele]=i+1;
    }
    long long m;
    cin>>m;
    long long v=0,p=0;
    for(long long i=0;i<m;i++){
        long long a;
        cin>>a;
        int b=mpp[a];
        v+=b;
        p+=(n-b)+1;
    }
    cout<<v<<" "<<p;
    return 0;
}