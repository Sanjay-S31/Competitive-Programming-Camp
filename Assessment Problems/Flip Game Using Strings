// You are playing a Flip Game with your friend.

// You are given a string currentState that contains only '+' and '-'. You and your friend take turns to flip two consecutive "++" into "--". The game ends when a person can no longer make a move, and therefore the other person will be the winner.

// Return all possible states of the string currentState after one valid move. You may return the answer in any order. If there is no valid move, return an empty list [].

// Example 1:

// Input: 

// currentState = "++++"

// Output: 

// ["--++","+--+","++--"]

// Example 2:

// Input: 

// currentState = "+"

// Output: 

// []

// Constraints:

// 1 <= currentState.length <= 500

// currentState[i] is either '+' or '-'.



// For example:

// Input	Result
// ++++
// --++
// +--+
// ++--
// +


#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%s",a);
    int n=strlen(a);
    if(n>1){
        for(int i=0;i<n-1;i++){
            if(a[i]=='+' && a[i+1]=='+'){
                char t[n];
                strcpy(t,a);
                t[i]=t[i+1]='-';
                printf("%s\n",t);
            }
        }
        for(int i=0;i<n-1;i++){
            if(a[i]=='-' && a[i+1]=='-'){
                char t[n];
                strcpy(t,a);
                t[i]=t[i+1]='+';
                printf("%s\n",t);
            }
        }
    }
    return 0;
}


