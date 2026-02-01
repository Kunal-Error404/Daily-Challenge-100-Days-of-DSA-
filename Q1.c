/*Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers. 
Shift existing elements to the right to make space.

Input:
- First line: integer n
- Second line: n space-separated integers (the array)
- Third line: integer pos (1-based position)
- Fourth line: integer x (element to insert)

Output:
- Print the updated array (n+1 integers) in a single line, space-separated

Example:
Input:
5
1 2 4 5 6
3
3

Output:
1 2 3 4 5 6

Explanation: Insert 3 at position 3, elements [4,5,6] shift right*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 0;//intialising integer n with 0
    scanf("%d",&n);//First line: integer n
    int *arr = NULL;//decalring ptr to array to use DMA
    arr = (int*)malloc(n*sizeof(int));//allocation of memory
    for(int i = 0;i<n;i++){
        scanf("%d\t",&arr[i]);//Second line: n space-separated integers (the array)
    }
    int pos = 0;
    scanf("%d",&pos);//Third line: integer pos (1-based position)
    int index = pos - 1;//converting given 1 index based pos to 0 index based pos
    int ele = 0;
    scanf("%d",&ele);//Fourth line: integer x (element to insert)
    arr = (int*)realloc(arr,(n+1)*sizeof(int));//reallocating memory to take n+1 members to account for the new inserted member
    for(int i = n; i>index;i--){//moving from the end and stoping just before the index keeping front members same;
        arr[i] = arr[i-1];//and pulling the left member to right empty space
    }
    arr[index] = ele;//after pulling is done I just put the input element at the input position
    for(int j = 0;j<(n+1);j++){
        printf("%d\t",arr[j]);//Print the updated array (n+1 integers) in a single line, space-separated
    }
    free(arr);//freeing memory


    return 0;

}