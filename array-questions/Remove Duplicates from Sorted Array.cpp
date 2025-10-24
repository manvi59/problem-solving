Remove Duplicates from Sorted Array

LeetCode #26 (Google favorite)

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