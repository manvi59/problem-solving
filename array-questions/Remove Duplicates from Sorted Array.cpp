Remove Duplicates from Sorted Array

LeetCode #26 (Google favorite) 
https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/1810121764/

Input: [1,1,2,2,3] → Output: [1,2,3]

Key: Two-pointer technique


Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]

//remove and add 


int removeDuplicates(int* nums, int numsSize) {
    
    int min=INT_MAX;
    int max=INT_MIN;
    
    for(int i=0;i<numsSize;i++){
       if(nums[i]<min){
           min=nums[i];
           
       }
       if(nums[i]>max){
           max=nums[i];
       }
    }
    int count=0;
   for(int i=0;i<numsSize;i++){
       if(min<=max){
           nums[i]=min;
           min++;
           count++;
       }else{
           nums[i]=0;
       }
       
   }

    // for(int i=0;i<numsSize;i++){
    //     cout<<nums[i]<<" ";
    // }cout<<endl;

 
    
    return count;
}



// ------------------------------------------Wrong Answer---------------------------
// 162 / 362 testcases passed

// Editorial
// Input
// nums =
// [0,0,0,0,3]


// Use Testcase
// Output
// [0,1,2,3]
// Expected
// [0,3]


// ---------------------this is the correct logic to remove the duplicate array ..
//---------------------this will work for every edge cases

// #include<iostream>
// using namespace std;
int removeDuplicates(int* nums, int numsSize) {
    
     int ans[numsSize];
    int count=0;

    for(int i=0;i<numsSize-1;i++){

        if(nums[i]!=nums[i+1] ){
            ans[count]=nums[i];
            count++;
        }
        
    }
    ans[count]=nums[numsSize-1];
    // cout<<count<<endl;
    

    for(int i=0;i<=count;i++){
        // cout<<ans[i]<<endl;
        nums[i]=ans[i];
    }
    
    return count+1;
}