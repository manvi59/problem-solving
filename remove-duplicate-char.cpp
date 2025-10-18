// input: "programming"
// Output: "progamin"



// --------------------this code will only work with lower case character ---------------

#include<iostream>
using namespace std;

int main(){
    
    // string str="programming";
    string str="banana";
    int arr[26]={0};

    for(int i=0;i<str.length();i++){
        int chr=str[i]-97;
        arr[chr]=arr[chr]+1;
      
    }

    for(int i=0;i<26;i++){
        cout<<arr[i]<<" ";
    }
    string ans="";
    
    for(int i=0;i<str.length();i++){
       int chr=str[i]-97;
        
    if(arr[chr]>=1){
        ans=ans+str[i];
        arr[chr]=0; 
   
        
    }
    }
    
    cout<<ans<<endl;
}


// how to make the logic for the mix of char , symboles and and string