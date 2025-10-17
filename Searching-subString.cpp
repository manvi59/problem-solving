 
#include<iostream>
#include<string>
using namespace std;

int main(){
    //  searching in string 
    // string s="hello dubai";
    // string sub="bai";
    // string s = "abcab";
    // string sub = "cab";
    
//     string s = "a_c_a_b"; // underscores just for clarity:actual "acab"
// string sub = "cab";

string s = "acab";
string sub = "cab";




int k=-1;

 for(int i=0;i<s.length();i++){
     if(sub[0]==s[i]){
         k=i;
         
     }
 }

cout<<k<<endl; 
int count=1;
if(k>=0){
 k=k+1;
   
    
for(int i=1;i<sub.length();){
     
    if(sub[i]==s[k]){
        cout<<sub[i] << "    "<<s[k]<<endl;
        i++;
        k++;
        count=count+1;
        // cout<<count<<endl;
    }
    else{
        cout<<"no"<<endl;
        break;
    }
}
}if(count==sub.length()){
    cout<<"yes"<<endl;
    }
    else{
    cout<<"no"<<endl;
}
 
    
    
}