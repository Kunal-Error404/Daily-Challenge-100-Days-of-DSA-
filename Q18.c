/*Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

 

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
 */
#include <stdio.h>
void reverseString(char* s, int sSize) {
       for(int i = 0;i<sSize/2;i++){
        int cur = s[i];
        int rev = s[sSize-i-1];
        s[i] = rev;
        s[sSize-i-1] = cur;
    } 
}