#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,a;
    cin>>s>>a;
    int i=0;
    string ans;
    while(i<s.length()){
        if(s[i]!=a[i])
            ans.push_back('1');
        else
            ans.push_back('0');
        i++;
    }
    cout<<ans;
    return 0;
}