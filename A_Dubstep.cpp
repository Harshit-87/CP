#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string part="WUB";
    int pos=s.find(part);
    while(pos!=s.npos){
        s.replace(pos,part.length()," ");
        pos=s.find(part);
    }

    stringstream ss(s);
    string word;
    while(ss>>word){
        cout<<word<<" ";
    }
    return 0;
}