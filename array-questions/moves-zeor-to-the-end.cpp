Move Zeroes to the End

LeetCode #283

Input: [0,1,0,3,12] → Output: [1,3,12,0,0]


// ------------------------------time complexity will be O(n^2)-------
#include<iostream>
using namespace std;

void fun(int arr[], int indx, int n){
    int i=indx;
    // cout<<indx;

    for(i;i<n-1;i++){
        arr[i]=arr[i+1];
        // cout<<arr[i]<<arr[i+1]<<endl;
    }
}

int main(){

    int arr[]={0,1,0,3,0,12};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<n<<endl;
    
    for(int i=0;i<n;i++){
        if(arr[i]==0){
             int temp=arr[i];
            fun(arr, i,n);
            arr[n-1]=temp;  
            
        }
    }
     
    
    for(int i=0;i<n;i ++){
        cout<<arr[i]<<" ";
    }
   


}


// ---------------------------------------moves ) to the end time complexity 0(n) and space complexity O(1)
//---------two pointer approach-----------

void moveZeroes(int* nums, int numsSize) {
    int j=0;

    for(int i=0;i<numsSize && j<numsSize;i++){

        if(nums[i]!=0){
            nums[j]=nums[i];
            j++;
        }

    }
     
    for(int i=j;i<numsSize;i++){
        nums[i]=0;
    }
    
    
}