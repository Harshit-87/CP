#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t;
    cin>>t;
    string s;
    cin>>s;   
    for(int i=0;i<t;i++){
        int l=0,r=1;
        while( r<s.length()){
           if(s[l]=='B' && s[r]=='G'){
            swap(s[l],s[r]);
            l=r+1;
            r=l+1;
           } 
           else{
            l++;
            r++;
           }
        }
    }
    cout<<s;
    return 0;
}