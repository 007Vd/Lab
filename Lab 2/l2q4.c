#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter  1st side length:");
    scanf("%d",&a);
    printf("enter  2nd side length:");
    scanf("%d",&b);
    printf("enter  3rd side length:");
    scanf("%d",&c);
    if ((a+b<c) || (b+c<a) || (a+c<b));
    printf("triangle cannot be formed");

}
