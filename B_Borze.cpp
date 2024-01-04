#include<bits/stdc++.h>
using namespace std;
int main(){
    string B;
    cin>>B;
    string num;
    int i=0;
    while(i<B.length()){
        if(B[i]=='.'){
            num+='0';
            i++;
        }
        else if(i+1<B.length() && B[i]=='-' && B[i+1]=='.'){
            num+='1';
            i+=2;
        }
        else if(i+1<B.length() && B[i]=='-' && B[i+1]=='-'){
            num+='2';
            i+=2;
        }
    }
    for(auto it:num){
        cout<<it-'0';
    }
    return 0;
}