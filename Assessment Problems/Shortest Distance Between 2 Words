// Given an array of strings wordsDict and two different strings that already exist in the array word1 and word2, return the shortest distance between these two words in the list.

// Example 1:

// Input: 

// wordsDict = ["practice", "makes", "perfect", "coding", "makes"], word1 = "coding", word2 = "practice"

// Output: 

// 3

// Example 2:

// Input: 

// wordsDict = ["practice", "makes", "perfect", "coding", "makes"], word1 = "makes", word2 = "coding"

// Output: 1

// Constraints:

// 2 <= wordsDict.length <= 3 * 10^4

// 1 <= wordsDict[i].length <= 10

// wordsDict[i] consists of lowercase English letters.

// word1 and word2 are in wordsDict.

// word1 != word2



// For example:

// Input	Result
// 5
// practice
// makes
// perfect
// coding
// makes
// coding
// practice
// 3
// 5
// practice
// makes
// perfect
// coding
// makes
// makes
// coding
// 1


#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    char arr[100][100];
    for(int i=0;i<n;i++){
        scanf("%s",arr[i]);
    }
    char w1[100],w2[100];
    scanf("%s",w1);
    scanf("%s",w2);
    int a=-1,b=-1,dist,min=INT_MAX;
    for(int i=0;i<n;i++){
        if(strcmp(w1,arr[i])==0)
            a=i;
        if(strcmp(w2,arr[i])==0)
            b=i;
        if(a!=-1 && b!=-1){
            dist=abs(a-b);
            if(dist<min){
                min=dist;
            }
        }
    }
    printf("%d",min);
    return 0;
}

