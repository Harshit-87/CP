#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b,c;
    cin>>a>>b>>c;

    
    unordered_map<char,int> m;
    for(auto it:c){
        m[it]++;
    }
    unordered_map<char,int> m1;
    for(auto it:a){
        m1[it]++;
    }
    for(auto it:b){
        m1[it]++;
    }

    if(m==m1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}