Rotate Array by K Steps
https://leetcode.com/problems/rotate-array/
LeetCode #189

Input: [1,2,3,4,5,6,7], k = 3 → Output: [5,6,7,1,2,3,4]

k=3;

// ---------correct rotation stretegy by ok

1 2 3 4  5 6 7
7 6 5 4  3 2 1
5 6 7 1  2 3 4

Input: [10, 20, 30, 40, 50], k = 2
Output: [40, 50, 10, 20, 30]



void rotate(int* nums, int numsSize, int k) {
    if (numsSize == 0) return;

    k = k % numsSize;  // handle cases where k > numsSize
    if (k == 0) return;

    // Step 1: Reverse entire array
    for (int i = 0, j = numsSize - 1; i < j; i++, j--) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    // Step 2: Reverse first k elements
    for (int i = 0, j = k - 1; i < j; i++, j--) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    // Step 3: Reverse remaining elements
    for (int i = k, j = numsSize - 1; i < j; i++, j--) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}
