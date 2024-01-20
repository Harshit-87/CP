#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string temp;
    for(auto it:s){
        if(it!='+'){
            temp+=it;
        }
    }
    sort(temp.begin(),temp.end());
    for(int i=0;i<temp.length();i++){
        if(i==temp.length()-1){
            cout<<temp[i];
        }
        else{
            cout<<temp[i]<<"+";
        }
    }
    return 0;
}