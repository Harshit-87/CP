#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        string ans;
        if(s.length()>10){
            ans+=s[0];
            int len=s.length()-2;
            ans+=to_string(len);
            ans+=s[s.length()-1];
        }
        else{
            ans=s;
        }
        cout<<ans<<endl;
    }
    return 0;
}