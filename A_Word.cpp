#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int sm=0,c=0;
    for(auto it:s){
        if(it>='A' && it<='Z')
            c++;
        else
            sm++;
    }

    if(sm>c || sm==c){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }

    cout<<s;
    return 0;
}