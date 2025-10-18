#include<iostream>
using namespace std;

int main(){
    char arr[]={'a', 'b', 'c', 'a', 'b', 'i', 'c', 'j'};

    // output --> i 


    int n=sizeof(arr)/sizeof(arr[0]);
    int ch[26]={0};
    
    for(int i=0;i<n;i++){
        int ans=arr[i]-97;
        ch[ans]=ch[ans]+1;
    }
    cout<<endl;
    for(int i=0;i<26;i++){
        // cout<<ch[i]<<" ";
        if(ch[i]==1){
            char chr=97+i;
            cout<<chr<<endl;
            break;
        }
        
        
    }cout<<endl;
    
     
    
    
    
    
}