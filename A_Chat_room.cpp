#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int p1=0,p2=0;
    string temp="hello";

    while(p1<s.length()){
        if(s[p1]==temp[p2]){
            p1++;
            p2++;
            if(p2==temp.length()){
                cout<<"YES";
                return 0;
            }
        }
        else{
            p1++;
        }
    }
    cout<<"NO";
    return 0;
}