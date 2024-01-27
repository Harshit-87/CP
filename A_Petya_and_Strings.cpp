#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);

    int i=0;
    while(i<a.length()){
        if(a[i]!=b[i]){
            if(a[i]<b[i]){
                cout<<"-1"<<endl;
                break;
            }
            else{
                cout<<"1"<<endl;
                break;
            }
        }
        i++;
    }
    if(i==a.length()) cout<<"0"<<endl;
    return 0;
}