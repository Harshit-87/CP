#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int X=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s[0]=='+'||s[2]=='+')
            X++;
        else if(s[0]=='-'||s[2]=='-')
            X--;
    }
    cout<<X<<endl;
    return 0;
}