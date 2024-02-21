#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    int o=0,z=0;
    for(auto it:s){
        if(it=='1'){
            o++;
            if(o>=7){
                cout<<"YES";
                return 0;
            }
        }
        else{
            o=0;
        }
        if(it=='0'){
            z++;
            if(z>=7){
                cout<<"YES";
                return 0;
            }
        }
        else{
            z=0;
        }
    }
    cout<<"NO";
    return 0;
}