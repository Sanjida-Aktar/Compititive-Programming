#include<bits/stdc++.h>
using namespace std;
int main(){
     string s;
     getline(cin ,s);
     stringstream ss(s);
     string word;
     int count=0;

     while(ss>>word){
     
     string tolowerword;
     for(char i:word){
        tolowerword += tolower(i);
     }
     if(tolowerword=="phitron"){
        count++;
     }
    }
     cout<<count<<endl;
    return 0;
}