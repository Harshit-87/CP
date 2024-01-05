#include<bits/stdc++.h>
using namespace std;
int main(){
    int oy;
    cin>>oy;
    while(true){
        oy++;
        int a=oy/1000;
        int b=oy/100%10;
        int c=oy/10%10;
        int d=oy%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            cout<<oy;
            break;
        }
    }
    return 0;
}