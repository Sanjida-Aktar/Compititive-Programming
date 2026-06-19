#include<iostream>
using namespace std;
int main(){
     string s;
     cin>> s;
      int sm_count =0;
      int cap_count =0;
      for(int i=0; i<s.length(); i++){
          if(s[i]>='a' && s[i]<='z'){
              sm_count++;
          }
          else if(s[i]>='A' && s[i]<='Z'){
              cap_count++;
          }
      }
      if(sm_count>cap_count){
          for(int i=0; i<s.length(); i++){
                if(s[i]>='A' && s[i]<='Z'){
                    s[i]=s[i]+32;
                }

          }
      }
      else{
          for(int i=0; i<s.length(); i++){
                if(s[i]>='a' && s[i]<='z'){
                    s[i]=s[i]-32;
                }
          }
      }
      cout<<s<<endl;

    return 0;
}