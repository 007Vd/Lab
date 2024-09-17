#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter a ");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    printf("enter c ");
    scanf("%d",&c);
    if (a>b && b>c) {
        printf(" the greatest no. is %d and minimum is %d",a,c);
     }
    if (b>c && c>a) {
     printf(" the greatest no. is %d and minimum is %d",b,a);
    }
    if (c>b && b>a) {
     printf(" the greatest no. is %d and minimum is %d",c,a);
    }
    if (c>a && a>b) {
     printf(" the greatest no. is %d and minimum is %d",c,b);
     }
    if (c>b && b>a) {
     printf(" the greatest no. is %d and minimum is %d",c,a);
    }
    if (b>a && a>c) {
     printf(" the greatest no. is %d and minimum is %d",b,c);
    }
    if (a>c && c>a) {
     printf(" the greatest no. is %d and minimum is %d",b,a);
    }
     }
