#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,k;
     cin>> n>>k;
     int arr[n];
     for(int i=0; i<n; i++){
        cin>>arr[i];
     }
     int t=0;
     int s=0;
     for(int i=0; i<k-1; i++){
        if(arr[i]>arr[k-1]){
            // cout<<arr[i]<<" "<<arr[k]<<endl;
            t++;
        }
     }
     for(int i=k;i<n;i++){
        if(arr[i]<arr[k-1]){
            s++;
        }
     }
     cout<<t<<" "<<s<<endl;
    return 0;
}