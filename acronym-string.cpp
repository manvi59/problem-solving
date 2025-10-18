#include<iostream>
using namespace std;

int main(){
    string a="listen";
    string b="silent";
    
    int arr1[26]={0};
    int arr2[26]={0};
     
    for(int i=0;i<a.length();i++){
        // cout<<a<<endl;
        int ch=a[i]-97;
        int me=b[i]-97;
        arr1[ch]=arr1[ch]+1;
        arr2[me]=arr2[me]+1;
        
    }
    
    int k=0;
    for(int i=0;i<26;i++){
        if(arr1[i]!=arr2[i]){
            k=1;
            cout<<"not"<<endl;
        break;
        }
    }
    
    if(k==0){
        cout<<"yes"<<endl;
    }
     
   
}