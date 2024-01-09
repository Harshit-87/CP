#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int a=0;
    while(n!=0){
        int dig=n%10;
        if(dig==4 || dig==7){
            a++;
        }
        n=n/10;
    }
    if(a==7 || a==4)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}