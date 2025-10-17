// unique character in string

#include<iostream>
#include<string>
using namespace std;

int main(){
  string s = "apple";
  
  
  
  int arr[122-97+1]={0};
  
  
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<n<<endl;
  
  
  for(int i=0;i<s.length();i++){
      int asc=s[i]-97;
      arr[asc]=arr[asc]+1;
    //   cout<<asc<<endl;
  }
  
   
  
//   cout<<122-97+1<<endl;
 for(int i=0;i<n;i++){
     
      cout<<arr[i]<<" ";
      
  }  
   
    
} 


// ------------------------------------output ---------------------

// a → 1
// e → 1
// l → 1
// p → 2
