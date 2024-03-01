#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,a=1,b=1;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    long long diff=arr[n-1]-arr[0];
    if(arr[0] == arr[n - 1])
        cout << diff << " " << (n - 1) * n / 2 << endl;
    else
    {
        for(int j = 1; j < n - 1; j++)
        {
        if(arr[j] == arr[n - 1])
            a++;
        else if(arr[j] == arr[0])
            b++;
        }
        cout << diff << " " << a * b << endl;
    }
    return 0;
}