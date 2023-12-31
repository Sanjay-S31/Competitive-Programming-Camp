// Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.

// Notice that you may not slant the container.

// Example 1:

// Water

// Input:

// 9 

// 1 8 6 2 5 4 8 3 7

// Output: 

// 49

// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

// Example 2:

// Input: 

// 2

// 11

// Output: 

// 1

// Example 3:

// 5

// 4 3 2 1 4

// Output: 

// 16

// Example 4:

// Input:

// 3 

// 1 2 1

// Output: 

// 2

// Constraints:

// n == height.length

// 2 <= n <= 10^5

// 0 <= height[i] <= 10^4


#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int i=0,j=n-1,max=0;
    while(i<j){
        int width=j-i;
        int height;
        if(a[i]<a[j])
            height=a[i];
        else
            height=a[j];
        int area=width*height;
        if(area>max)
            max=area;
        if(a[i]<a[j])
            i++;
        else
            j--;
    }
    printf("%d",max);
    return 0;
}
