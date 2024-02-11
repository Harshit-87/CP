#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    for(auto ch:n){
        if(ch!='1' && ch!='4'){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(n[0]!='1'){
        cout<<"NO"<<endl;
        return 0;
    }
    if(n.find("444")!=n.npos){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    return 0;
}