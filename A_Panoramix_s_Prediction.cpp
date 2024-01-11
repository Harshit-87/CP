#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n,m;
    cin>>n>>m;
    if(!isPrime(m)){
        cout<<"NO";
        return 0;
    }
    int i=n+1;
    while(i){
        if(isPrime(i)){
            if(i==m){
                cout<<"YES";
                break;
            }
            else{
                cout<<"NO";
                break;
            }
        }
        i++;
    }
    return 0;
}