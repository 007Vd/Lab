#include <stdio.h>
#include <math.h>
int main(){
    int D,a,b,c,r1,r2;
    printf("enter value of squared term's coefficiet:");
    scanf("%d",&a);
    printf("enter value of degree 1 term's coefficiet:");
    scanf("%d",&b);
    printf("enter value of constant term");
    scanf("%d",&c);
    D= (pow(b,2)-4*a*c);
    r1=(-b+(pow(D,0.5)))/(2*a);
    r2=(-b-(pow(D,0.5)))/(2*a);
    printf("roots of equation are %d and %d",r1,r2);
}
