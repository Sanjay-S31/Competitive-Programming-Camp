// At a lemonade stand, each lemonade costs $5. Customers are standing in a queue to buy from you, and order one at a time (in the order specified by bills). Each customer will only buy one lemonade and pay with either a $5, $10, or $20 bill. You must provide the correct change to each customer so that the net transaction is that the customer pays $5.

// Note that you don't have any change in hand at first.

// Given an integer array bills where bills[i] is the bill the ith customer pays, return true if you can provide every customer with correct change, or false otherwise.

// Example 1:

// Input: 

// 5

// 5 5 5 10 20

// Output: 

// true

// Explanation: 

// From the first 3 customers, we collect three $5 bills in order.

// From the fourth customer, we collect a $10 bill and give back a $5.

// From the fifth customer, we give a $10 bill and a $5 bill.

// Since all customers got correct change, we output true.

// Example 2:

// Input: 

// 5

// 5 5 10 10 20

// Output: 

// false

// Explanation: 

// From the first two customers in order, we collect two $5 bills.

// For the next two customers in order, we collect a $10 bill and give back a $5 bill.

// For the last customer, we can not give change of $15 back because we only have two $10 bills.

// Since not every customer received correct change, the answer is false.

// Example 3:

// Input: 

// 3

// 5 5 10

// Output: 

// true

// Example 4:

// 2

// 10 10

// Output: 

// false

// Constraints:

// 1 <= bills.length <= 10^5

// bills[i] is either 5, 10, or 20.

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int cur[]={0,0,0};
    for(int i=0;i<n;i++){
        if(a[i]==5){
            cur[0]++;
        }
        if(a[i]==10){
            if(cur[0]>0){
                cur[0]--;
                cur[1]++;
            }
            else{
                printf("false");
                return 0;
            }
        }if(a[i]==20){
            if(cur[1]>0 && cur[0]>0){
                cur[0]--;
                cur[1]--;
                cur[2]++;
            }
            else if(cur[0]>2){
                cur[0]-=3;
                cur[2]++;
            }
            else{
                printf("false");
                return 0;
            }
        }
       
       
    }
    printf("true");
    return 0;
}



#include<stdio.h>
int main(){
    int n,sum=0,c5=0,c10=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==5){
            c5++;
            sum+=a[i];
        }
        else if(a[i]==10 && c5!=0){
            c10++;
            c5--;
            sum=sum+a[i]-5;
        }
        else if(a[i]==20 && c5!=0 && c10!=0){
            c5--;
            sum=sum+a[i]-(c10*10)-(c5*5);
        }
    }
    if(c5>0 && c10>0)
        printf("true");
    else
        printf("false");
    return 0;
}


#include<stdio.h>
int main(){
    int n,i,b=0,c=0,d=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]==5){
            b++;
        }
        else if(a[i]==10){
            c++;
            b--;
        }
        else if(a[i]==20){
            if(c>=1){
                d++;
                b--;
                c--;
            }
            else{
                d++;
                b-=3;
            }
        }
    }
    if(b>=0 && c>=0 && d>=0){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}


