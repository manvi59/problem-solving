// For the string "abc", the substrings are:

// a  
// ab  
// abc  
// b  
// bc  
// c

#include <iostream>
using namespace std;

int main(){
    // string str="abc";
    string str="abcd";

    for(int i=0;i<str.length();i++){
        string ans="";
        ans=ans+str[i];
        cout<<ans<<endl;
        
        for(int j=i+1;j<str.length();j++){
            ans=ans+str[j];
            cout<<ans<<endl;
            

        }
    }


}