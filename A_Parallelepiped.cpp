#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int x,y,z;
    cin>>x;
    cin>>y;
    cin>>z;
    long long int len=sqrt((x*z)/y);
    long long int ber=sqrt((x*y)/z);
    long long int hei=sqrt((y*z)/x);
    cout<<4*(len+ber+hei);
    return 0;
}