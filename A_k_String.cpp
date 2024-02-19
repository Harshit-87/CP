#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    string s;
    cin>>k>>s;
    map<char,int> m;
    for(auto &c:s){
        m[c]++;
    }
    string res="";
    for(auto &it:m){
        if(it.second%k!=0){
            cout<<-1<<endl;
            return 0;
        }
        else{
            int times=it.second/k;
            while(times--){
                res+=it.first;
            }
        }
    }
    string old=res;
    while(--k){
        res+=old;
    }
    cout<<res<<endl;
    return 0;
}