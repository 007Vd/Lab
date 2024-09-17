#include <stdio.h>
int main(){
    int x;
    printf(" enter the year to be checked:");
    scanf("%d",&x);
    if (x %400 ==0){
        printf("%d is a leap year",x);
    }
    if (x%4==0 && x%100 !=0){
        printf("%d is a leap year",x);
    }
    else{
        printf("%d is not a leap year",x);
    }
}
