#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(auto it:s){
        if(it=='A' || it=='E' || it=='I' || it=='O' || it=='U' || it=='Y' || it=='a' || it=='e' || it=='i' || it=='o' || it=='u' || it=='y')
            continue;
        else 
            cout<<"."<<(char)tolower(it);
    }
    return 0;
}