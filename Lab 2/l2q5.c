#include <stdio.h>
int main(){
    int p,c,m,e,cs;
    float per;

    printf("enter physics marks: off 100");
    scanf("%d",&p);
    printf("enter chem marks: off 100");
    scanf("%d",&c);
    printf("enter maths marks: off 100");
    scanf("%d",&m);
    printf("enter english marks: off 100");
    scanf("%d",&e);
    printf("enter CS marks: off 100");
    scanf("%d",&cs);

    per=(p+c+m+e+cs)/5;

    if(per>=90){
    printf("percentage is %f and grade is A",per);
    }
    if (per>=80){
    printf("percentage is %f and grade is B",per);
    }
    if (per >=70){
    printf("percentage is %f and grade is C",per);
    }
    if (per >=60){
    printf(",percentage is %f and grade is D",per);
    }
    if (per >=40){
    printf("percentage is %f and grade is E",per);
    }
    if (per <40){
    printf("percentage is %f and grade is Fail",per);
    }

}
