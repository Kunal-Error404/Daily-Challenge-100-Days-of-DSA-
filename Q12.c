/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 

Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1
 

Follow up: Could you minimize the total number of operations done?*/
void moveZeroes(int* nums, int numsSize) {
        int temp = 0;//intitalising temp variable with 0
    for(int i = 0;i<numsSize;i++){//this for loop to traverse array
        if(nums[i]==0){//checking condition
            for(int j = i+1;j<numsSize;j++){//if condition true then I start a loop from the next element and swap it using temp ~
                if(nums[j]!=0){       //variable if its non zero
               temp = nums[j];
                nums[j] = nums[i];
                nums[i]= temp;
                break;//I break as i dont want to do multiple swaps i just need a single swap
               }
            }
        }
    }    
}