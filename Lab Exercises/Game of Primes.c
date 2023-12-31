//Given an input n, find the happy number and prime numbers between n.
//Given an input pos, print the element in the resultant array.


#include<stdio.h>
int isHappy(int n);
int isPrime(int n);
int main(){
    int n,a=0,b=0;
    scanf("%d",&n);
    int happy[n],prime[n];
    for(int i=1;i<n;i++){
        if(isHappy(i)==1){
            happy[a]=i;
            a++;
        }
    }
    for(int i=2;i<n;i++){
        if(isPrime(i)==1){
            prime[b]=i;
            b++;
        }
    }
    for(int i=0;i<a;i++){
        printf("%d ",happy[i]);
    }
    printf("\n");
    for(int i=0;i<b;i++){
        printf("%d ",prime[i]);
    }
    return 0;
}
int isHappy(int n){
    while(1){
        int sum=0;
        int rem;
        while(n!=0){
            rem=(n%10)*(n%10);
            sum+=rem;
            n=n/10;
        }
        n=sum;
        if(sum==1){
            return 1;
        }
        if(sum==4){
            return 0;
        }
    }
}
int isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

// In a global Mathematics contest, the contestants are told to invent some special numbers which can be built by adding the squares of its digits. Doing this perpetually, the numbers will end up to 1 or 4. 

// If a positive integer ends with 1, then it is called the Number of Game.

// An example from above is:

// 13 = 1^2 + 3^2 = 1+9 = 10 (Step:1)

// 10 = 1^2 + 0^2 = 1+0 = 1 (Step:2), iteration ends in Step 2 since number ends with 1

// Then in next round, the contestants are asked to combine their newly invented number, i.e. Number of Game with prime number.

// Now, being a smart programmer, write a program to help the contestants to find out the Nth combined number within any given range, where N can be any integer.

// Input Format:

// Input consists of 3 integers X, Y, N, one on each line. X and Y are upper and lower limits of the range. The range is inclusive of both X and Y. Find Nth number in range [X,Y].

// Line 1: X, where X is the upper limit of the range

// Line 2: Y, where Y is the lower limit of the range

// Line 3: N, where Nth element of the series is required

// Constraints

// X <= Y

// X > 0

// N > 0

// Output Format:

// Output will show the Nth element of the combined series lying in the range between X and Y.

// Line 1

// For Valid Input, print

// U, where U is the Nth element of the combined number series lying in the range between X and Y.

// Or

// No number is present at this index

// For Invalid Input, print

// Invalid Input

// Sample Input / Output

// Input

// 1

// 30

// 3

// Output

// 19

// Input

// 12

// 33

// 5

// Output

// No number is present at this index

// Input

// -5

// @

// 4

// Output

// Invalid Input


// For example:

// Input	Result
// 1
// 30
// 3
// 19
// 12
// 33
// 5
// No number is present at this index
// -5
// @
// 4
// Invalid Input

#include<stdio.h>
int isPrime(int n);
int isHappy(int n);
int main(){
    int x,y,pos;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&pos);
    int a[100],k=0;
    if(x>0 && y>0){
        for(int i=x;i<=y;i++){
            if(isPrime(i)==1 && isHappy(i)==1){
                a[k]=i;
                k++;
            }
        }
        if(a[pos]!=0)
            printf("%d ",a[pos]);
        else if(a[pos]==0)
            printf("No number is present at this index");
    }
    else
        printf("Invalid Input");
    return 0;
}
int isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int isHappy(int n){
    int sum=0,rem=0;
    int temp=n;
    while(sum!=1 && sum!=4){
        sum=0;
        while(temp!=0){
            rem=(temp%10)*(temp%10);
            sum+=rem;
            temp=temp/10;
        }
        temp=sum;
    }
    if(sum==1)
        return 1;
    else
        return 0;
}




#include<stdio.h>
int isHappy(int n);
int isPrime(int n);
int main(){
    int a,b,pos,k=0;
    scanf("%d %d %d",&a,&b,&pos);
    int res[b];
    for(int i=a;i<b;i++){
        if(isHappy(i)==1  && isPrime(i)==1){
            res[k]=i;
            k++;
        }
    }
    printf("%d",res[pos-1]);
    return 0;
}
int isHappy(int n){
    while(1){
        int sum=0;
        int rem;
        while(n!=0){
            rem=(n%10)*(n%10);
            sum+=rem;
            n=n/10;
        }
        n=sum;
        if(sum==1)
            return 1;
        if(sum==4)
            return 0;
    }
}
int isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
