// input: "programming"
// Output: "progamin"



// --------------------this code will only work with lower case character ---------------

#include<iostream>
using namespace std;

int main(){
    
    // string str="programming";
    string str="banana";
    string str="jjjjjjjxxxx&&44jwd";
  
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

//  string str="jjjjjjjxxxx&&44jwd"; --> for this kind of how to do it 

// j=1
// x=1
// &=5
// 4



// this is for the removal for every char ----------------
#include<iostream>
using namespace std;

int main(){
    string str="jjjjjjjxxxx&&44jwd";
    string ans="";
    
    //ascii code 0 ,127
    int arr[127]={0};
    for(int i=0;i<str.length();i++){
        int chr=str[i];
        // cout<<chr<<endl;
        arr[chr]=arr[chr]+1;
       
    }
    
    for(int i=0;i<str.length();i++){
        int me=str[i];
        
        if(arr[me]>0){
            
            ans=ans+str[i];
            arr[me]=0;
        }
        cout<<me<<endl;
    }
    
     
    cout<<endl;
    cout<<ans;
}
