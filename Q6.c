/*You are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n (inclusive).
 This array represents a permutation of the integers from 1 to n with one element missing. Your task is to identify and 
 return the missing element.

Examples:

Input: arr[] = [1, 2, 3, 5]
Output: 4
Explanation: All the numbers from 1 to 5 are present except 4.
Input: arr[] = [8, 2, 4, 5, 3, 7, 1]
Output: 6
Explanation: All the numbers from 1 to 8 are present except 6.
Input: arr[] = [1]
Output: 2
Explanation: Only 1 is present so the missing element is 2.*/


// ONLY FOR GEEKSFORGEEKS DONT RUN IT IN IDLE;


int missingNum(int *arr, int size) {
long long k = size+1;
long long sum = ((k)*(k+1))/2;//i know that elements are always starting from 1 and going till n~
long long sumarr = 0;//so if i find sum of those elements and then subtract them sum of array which is till n-1~
for(int i = 0;i<size;i++){//I will get the missing index, I think this is the easiest way
    sumarr = sumarr+arr[i];//here size is n-1, so (k*k+1)/2 has k =size+1 = n
}
int missing_element = (int)(sum - sumarr);
return missing_element;
    
}
