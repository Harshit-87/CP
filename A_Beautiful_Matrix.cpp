#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>vec(5,vector<int>(5));
    int r,c;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int a;
            cin>>a;
            if(a==1){
                r=i;
                c=j;
            }
            vec[i][j]=a;
        }
    }
    cout<<abs(2-r)+abs(2-c);
    return 0;
}