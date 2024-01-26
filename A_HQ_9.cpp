#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(auto it:s){
        if(it=='H' || it=='Q' || it=='9'){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}