
// Implement run-length encoding (e.g., “aaabb” → “a3b2”).

#include<iostream>
using namespace std;
#include<string>

int main(){
    string str="aaabb";
    // string str="aabba";
    string ans="";
    int count=1;
    for(int i=0;i<str.length();i++){
        if(str[i]==str[i+1]){
            count++;
        }else{
            // cout<<str[i]<<count<<endl;
            ans=ans+str[i]+to_string(count);
            count=1;
        }
        
    }
    
    cout<<ans<<endl;
}