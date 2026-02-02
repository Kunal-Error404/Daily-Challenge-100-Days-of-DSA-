/*Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. 
Shift remaining elements to the left.

Input:
- First line: integer n
- Second line: n space-separated integers
- Third line: integer pos (1-based position to delete)

Output:
- Print the updated array with (n-1) elements, space-separated

Example:
Input:
5
10 20 30 40 50
2

Output:
10 30 40 50

Explanation: Delete position 2 (element 20), remaining elements shift left*/

#include <stdio.h>

int main(){
    int n = 0;
    scanf("%d",&n);//First line: integer n
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d\t",&arr[i]);//Second line: n space-separated integers
    }
    int pos = 0;
    scanf("%d",&pos);//Third line: integer pos (1-based position to delete)
    //int index = pos - 1;

    for(int j = pos;j<n;j++){
        arr[j-1]=arr[j];//same logic as yesterday, yesterday I shifted to right today i shifted to left, i start from the ~
    }//index+1 to shift to left

    arr[n-1] = '\0';//maam taught us this in class to end with null;

    for(int k = 0;k < n-1;k++){//as i have to print n-1 elements
        printf("%d\t",arr[k]);// Print the updated array with (n-1) elements, space-separated
    }

    return 0;


}