// Check if Array is Sorted and Rotated

// Input: [3, 4, 5, 1, 2] → Output: true

// Key: Count rotation points.



// find the roted and sorted array 

#include<iostream>
using namespace std;

int main(){
    // int arr[]={3, 4, 5, 1, 2};
    // int arr[]={1,2,3,4,5};
    int arr[]={4,5,6,1,2,3};
    // int arr[]={1};
    // int arr[]={1,3,2};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    if(n==1){
        count=1;
    }
    
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            continue;
        }else{
            count++;
        }
    }
    
     if( (arr[0]-arr[n-1]==1 ||  arr[0]-arr[n-1]==0) && count==1){
        cout<<"yes"<<endl;
    }else{
        cout<<"not sorted and roted";
    }
    

}