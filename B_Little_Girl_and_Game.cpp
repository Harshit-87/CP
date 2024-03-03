#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    long long arr[26]={0};
    for(auto it:s){
        arr[it-'a']++;
    }
    long long odd=0;
    for(int i=0;i<26;i++){
        if(arr[i]%2!=0) odd++;
    }

    if(odd==0 || odd%2!=0) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
    return 0;
}