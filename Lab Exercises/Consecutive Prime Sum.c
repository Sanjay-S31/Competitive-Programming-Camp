// Some prime numbers can be expressed as Sum of other consecutive prime numbers.

// For example

// 5 = 2 + 3

// 17 = 2 + 3 + 5 + 7

// 41 = 2 + 3 + 5 + 7 + 11 + 13

// Your task is to find out how many prime numbers which satisfy this property are present in the range 3 to N subject to a constraint that summation should always start with number 2.

// Write code to find out number of prime numbers that satisfy the above mentioned property in a given range.

// Input Format:

// First line of input contains k - the number of inputs

// The next k lines contains a number N.

// Output Format:

// Print the total number of all such prime numbers which are less than or equal to N.

// Example:

// Input:

// k = 2

// N = 20

// N = 15

// Output:

// 2 (there are 2 such numbers: 5 and 17)

// 1


// For example:

// Input	Result
// 2
// 20
// 15
// 2
// 1

#include<stdio.h>
int isPrime(int n);
int main(){
    int t;
    scanf("%d",&t);
    int n;
    while(t!=0){
        int x;
        scanf("%d",&n);
        int p[n],k=0;
        for(int i=2;i<n;i++){
           x=isPrime(i);
           if(x==1){
               p[k]=i;
               k++;
           }
        }
        int count=0;
        for(int i=1;i<k;i++){
            int sum=0;
            for(int j=0;j<i;j++){
                sum+=p[j];
                if(sum==p[i]){
                    count++;
                }
            }
        }
        printf("%d\n",count);
        t--;
    }
}
int isPrime(int n){
    for(int i=2;i<n-1;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

