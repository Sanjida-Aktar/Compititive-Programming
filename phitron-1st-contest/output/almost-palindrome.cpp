#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
        string s;
        cin>>s;
        int fre[26]={0};
        for(int i=0; i<(int)s.size();i++){
            fre[s[i]-'a']++;
        }
        int count=0;
        for(int i=0; i<26; i++){
            if(fre[i]%2!=0)
            count++;
        }
        int ans=(count>0? count-1: 0);
        cout<<ans<<endl;
     }
    return 0;
}