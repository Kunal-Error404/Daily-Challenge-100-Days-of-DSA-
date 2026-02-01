/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int index2 = 0;
    int index1 = 0;
    for(int i = 0;i<numsSize;i++){
        int new = target - nums[i];
        for(int j = i+1;j<numsSize;j++){
            if(nums[j] == new){
                index2 = j;
                index1 = i;
            }
        }
        
    }
    
    int *arr = NULL;
    arr=(int*)malloc(2*sizeof(int));
    arr[0] = index1;
    arr[1] = index2;
    *returnSize = 2;
    return arr;

}