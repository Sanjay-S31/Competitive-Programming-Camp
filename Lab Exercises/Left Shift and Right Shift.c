#include<stdio.h>
#include<string.h>
void leftShift(char a[]);
void rightShift(char a[]);
int main(){
    char a[100];
    scanf("%s",a);
    leftShift(a);
    printf("\n");
    rightShift(a);
    return 0;
}
void leftShift(char a[]){
    char temp[strlen(a)];
    for(int i=1;i<strlen(a);i++){
        temp[i-1]=a[i];
    }
    temp[strlen(a)-1]=a[0];
    temp[strlen(a)]='\0';
    printf("%s",temp);
}
void rightShift(char a[]){
    char temp[strlen(a)];
    for(int i=0;i<strlen(a)-1;i++){
        temp[i+1]=a[i];
    }
    temp[0]=a[strlen(a)-1];
    temp[strlen(a)]='\0';
    // for(int i=0;i<strlen(temp);i++)
    printf("%s",temp);
}
