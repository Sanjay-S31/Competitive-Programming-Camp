#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("%*s",n*2,"");
    printf("*\n");
    for(int i=0;i<n-1;i++){
        for(int j=1;j<=n-i;j++){
            printf("%*s",2*(n-j),"");
            for(int k=0;k<((2*j)+1);k++){
                printf("* ");
            }
            printf("\n");
        }
    }
    for(int i=0;i<2;i++){
        printf("%*s",n*2,"");
        printf("*\n");
    }
    return 0;
}

// Chirag is a pure Desi boy. And his one and only dream is to meet Santa Claus. He decided to decorate a Christmas tree for Santa on coming Christmas. Chirag made an interesting Christmas tree that grows day by day.

// The Christmas tree is comprised of the following:

// · Parts

// · Stand

// Each Part is further comprised of Branches. Branches are comprised of Leaves.

// How the tree appears as a function of days should be understood. Basis that print the tree as it appears on the given day. Below are the rules that govern how the tree appears on a given day.

// Write a program to generate such a Christmas tree whose input is number of days.

// Rules:

// 1. If tree is one-day old, you cannot grow. Print a message “You cannot generate Christmas tree”.

// 2. Tree will die after 20 days; it should give a message “Tree is no more”.

// 3. Tree will have one part less than the number of days. E.g.

//     o On 2nd day tree will have 1 part and one stand.

//     o On 3rd day tree will have 2 parts and one stand.

//     o On 4th day tree will have 3 parts and one stand and so on.

// 4. Top-most part will be the widest and bottom-most part will be the narrowest.

// 5. Difference in number of branches between top-most and second from top will be 2.

// 6. Difference in number of branches between second from top and bottom-most part will be 1.

// Below is an illustration of how the tree looks like on 4th day


// 4th Day Illustration

// Input Format:

// First line of input contains k - the number of inputs

// The next k lines denote the number of days N

// Output Format:

// Print Christmas Tree for given N

// OR

// Print “You cannot generate Christmas tree” if N <= 1

// OR

// Print “Tree is no more” if N > 20

// Constraints:

// 0<= N <=20

// Example:

// Input:

// 2

// 1

// 2

// Output:

// You cannot generate Christmas tree

//   *

//  ***

// *****

//   * 

//   * 

// Input

// 5

// 0

// 1

// 2

// 1000

// 5

// Expected Output

// You cannot generate Christmas tree

// You cannot generate Christmas tree

//   *

//  ***

// *****

//   *

//   *

// Tree is no more

//      *

//     ***

//   *****

//   *******

//  *********

// ***********

//     ***

//   *****

//   *******

//  *********

//     ***

//   *****

//   *******

//     ***

//   *****

//      *

//      *


// For example:

// Input	Result
// 2
// 1
// 2
// You cannot generate Christmas tree
//   *
//  ***
// *****
//   *  
//   *  


#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int n;
    while(t!=0){
        scanf("%d",&n);
        if(n<=1){
            printf("You cannot generate Christmas tree\n");
        }
        else if(n>1 && n<20){
            printf("%*s",n,"");
            printf("*\n");
            for(int i=0;i<n-1;i++){
                for(int j=1;j<=n-i;j++){
                    printf("%*s",n-j,"");
                    for(int k=0;k<2*j+1;k++){
                        printf("*");
                    }
                    printf("\n");
                }
            }
            for(int i=0;i<2;i++){
                printf("%*s",n,"");
                printf("*\n");
            }
        }
        else if(n>=20){
            printf("Tree is no more\n");
        }
        t--;
    }
    return 0;
}



